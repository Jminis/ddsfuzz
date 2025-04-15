#!/bin/bash
set -e

export INSTALL_PATH=$HOME/DDS-FUZZ
export IDL_DIR=$INSTALL_PATH/core/cyclonedds/lib
export GEN_DIR=$INSTALL_PATH/core/cyclonedds/gen
export INCLUDE_DIR=$INSTALL_PATH/core/cyclonedds/include
export IDLC=$INSTALL_PATH/cyclonedds/install/bin/idlc
export CYCLO_DIR=$INSTALL_PATH/cyclonedds/install/lib/cmake/CycloneDDS
export OUT_DIR=$INSTALL_PATH/DDSFuzz

echo "[*] Generating IDL headers..."
mkdir -p "$GEN_DIR"
find "$IDL_DIR" -name '*.idl' | while read -r idl_file; do
    "$IDLC" -o "$GEN_DIR" "$idl_file"
done

echo "[*] Copying headers to include/..."
mkdir -p "$INCLUDE_DIR"
cp -v "$GEN_DIR"/*.h "$INCLUDE_DIR" 2>/dev/null || echo "  [!] No .h files"
cp -v "$GEN_DIR"/*.inl "$INCLUDE_DIR" 2>/dev/null || true

echo "[*] Building..."
cd "$INSTALL_PATH/core"
rm -rf build
mkdir build && cd build
cmake .. -DCycloneDDS_DIR="$CYCLO_DIR"
cmake --build .

echo "[*] Copying fuzzers to output directory..."
mkdir -p $OUT_DIR
cp -v $INSTALL_PATH/core/build/cyclonedds/CycloneddsFuzz $OUT_DIR || echo "  [!] CycloneddsFuzz missing"
cp -v $INSTALL_PATH/core/build/Fastdds/FastddsFuzz $OUT_DIR || echo "  [!] FastddsFuzz missing"
cp -v $INSTALL_PATH/core/build/Opendds/OpenddsFuzz $OUT_DIR || echo "  [!] OpenddsFuzz missing"
cp -v $INSTALL_PATH/core/build/Opendds/Open-dds_rtps.ini $OUT_DIR || true
cp -v $INSTALL_PATH/core/build/Fuzzer/security_mutator $OUT_DIR || echo "  [!] security_mutator missing"

echo "[✔] Done."

