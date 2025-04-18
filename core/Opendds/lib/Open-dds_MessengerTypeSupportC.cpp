


#include "../include/Open-dds_MessengerTypeSupportC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "Open-dds_MessengerTypeSupportC.inl"
#endif /* !defined INLINE */



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Messenger::MessageTypeSupport.

Messenger::MessageTypeSupport_ptr
TAO::Objref_Traits<Messenger::MessageTypeSupport>::duplicate (
    Messenger::MessageTypeSupport_ptr p)
{
  return Messenger::MessageTypeSupport::_duplicate (p);
}

void
TAO::Objref_Traits<Messenger::MessageTypeSupport>::release (
    Messenger::MessageTypeSupport_ptr p)
{
  ::CORBA::release (p);
}

Messenger::MessageTypeSupport_ptr
TAO::Objref_Traits<Messenger::MessageTypeSupport>::nil (void)
{
  return Messenger::MessageTypeSupport::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messenger::MessageTypeSupport>::marshal (
    const Messenger::MessageTypeSupport_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



Messenger::MessageTypeSupport::MessageTypeSupport (void)
{}

Messenger::MessageTypeSupport::~MessageTypeSupport (void)
{
}

Messenger::MessageTypeSupport_ptr
Messenger::MessageTypeSupport::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref));
}

Messenger::MessageTypeSupport_ptr
Messenger::MessageTypeSupport::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageTypeSupport::_duplicate (
      dynamic_cast<MessageTypeSupport_ptr> (_tao_objref));
}

Messenger::MessageTypeSupport_ptr
Messenger::MessageTypeSupport::_nil (void)
{
  return 0;
}

Messenger::MessageTypeSupport_ptr
Messenger::MessageTypeSupport::_duplicate (MessageTypeSupport_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messenger::MessageTypeSupport::_tao_release (MessageTypeSupport_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messenger::MessageTypeSupport::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/TypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Messenger/MessageTypeSupport:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Messenger::MessageTypeSupport::_interface_repository_id (void) const
{
  return "IDL:Messenger/MessageTypeSupport:1.0";
}

::CORBA::Boolean
Messenger::MessageTypeSupport::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// /home/dpl5626/OpenDDS-3.26/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Messenger::MessageDataWriter.

Messenger::MessageDataWriter_ptr
TAO::Objref_Traits<Messenger::MessageDataWriter>::duplicate (
    Messenger::MessageDataWriter_ptr p)
{
  return Messenger::MessageDataWriter::_duplicate (p);
}

void
TAO::Objref_Traits<Messenger::MessageDataWriter>::release (
    Messenger::MessageDataWriter_ptr p)
{
  ::CORBA::release (p);
}

Messenger::MessageDataWriter_ptr
TAO::Objref_Traits<Messenger::MessageDataWriter>::nil (void)
{
  return Messenger::MessageDataWriter::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messenger::MessageDataWriter>::marshal (
    const Messenger::MessageDataWriter_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



Messenger::MessageDataWriter::MessageDataWriter (void)
{}

Messenger::MessageDataWriter::~MessageDataWriter (void)
{
}

Messenger::MessageDataWriter_ptr
Messenger::MessageDataWriter::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref));
}

Messenger::MessageDataWriter_ptr
Messenger::MessageDataWriter::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataWriter::_duplicate (
      dynamic_cast<MessageDataWriter_ptr> (_tao_objref));
}

Messenger::MessageDataWriter_ptr
Messenger::MessageDataWriter::_nil (void)
{
  return 0;
}

Messenger::MessageDataWriter_ptr
Messenger::MessageDataWriter::_duplicate (MessageDataWriter_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messenger::MessageDataWriter::_tao_release (MessageDataWriter_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messenger::MessageDataWriter::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Messenger/MessageDataWriter:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Messenger::MessageDataWriter::_interface_repository_id (void) const
{
  return "IDL:Messenger/MessageDataWriter:1.0";
}

::CORBA::Boolean
Messenger::MessageDataWriter::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}
// TAO_IDL - Generated from
// /home/dpl5626/OpenDDS-3.26/ACE_wrappers/TAO/TAO_IDL/be/be_visitor_interface/interface_cs.cpp:47


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations for Messenger::MessageDataReader.

Messenger::MessageDataReader_ptr
TAO::Objref_Traits<Messenger::MessageDataReader>::duplicate (
    Messenger::MessageDataReader_ptr p)
{
  return Messenger::MessageDataReader::_duplicate (p);
}

void
TAO::Objref_Traits<Messenger::MessageDataReader>::release (
    Messenger::MessageDataReader_ptr p)
{
  ::CORBA::release (p);
}

Messenger::MessageDataReader_ptr
TAO::Objref_Traits<Messenger::MessageDataReader>::nil (void)
{
  return Messenger::MessageDataReader::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<Messenger::MessageDataReader>::marshal (
    const Messenger::MessageDataReader_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO_END_VERSIONED_NAMESPACE_DECL



Messenger::MessageDataReader::MessageDataReader (void)
{}

Messenger::MessageDataReader::~MessageDataReader (void)
{
}

Messenger::MessageDataReader_ptr
Messenger::MessageDataReader::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref));
}

Messenger::MessageDataReader_ptr
Messenger::MessageDataReader::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return MessageDataReader::_duplicate (
      dynamic_cast<MessageDataReader_ptr> (_tao_objref));
}

Messenger::MessageDataReader_ptr
Messenger::MessageDataReader::_nil (void)
{
  return 0;
}

Messenger::MessageDataReader_ptr
Messenger::MessageDataReader::_duplicate (MessageDataReader_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  return obj;
}

void
Messenger::MessageDataReader::_tao_release (MessageDataReader_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
Messenger::MessageDataReader::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:DDS/Entity:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:DDS/DataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OpenDDS/DCPS/DataReaderEx:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:Messenger/MessageDataReader:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* Messenger::MessageDataReader::_interface_repository_id (void) const
{
  return "IDL:Messenger/MessageDataReader:1.0";
}

::CORBA::Boolean
Messenger::MessageDataReader::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

