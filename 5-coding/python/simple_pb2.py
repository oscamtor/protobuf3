# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: simple.proto
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0csimple.proto\x12\x0e\x65xample.simple\"Q\n\rSimpleMessage\x12\n\n\x02id\x18\x01 \x01(\x05\x12\x11\n\tis_simple\x18\x02 \x01(\x08\x12\x0c\n\x04name\x18\x03 \x01(\t\x12\x13\n\x0bsample_list\x18\x04 \x03(\x05\x62\x06proto3')



_SIMPLEMESSAGE = DESCRIPTOR.message_types_by_name['SimpleMessage']
SimpleMessage = _reflection.GeneratedProtocolMessageType('SimpleMessage', (_message.Message,), {
  'DESCRIPTOR' : _SIMPLEMESSAGE,
  '__module__' : 'simple_pb2'
  # @@protoc_insertion_point(class_scope:example.simple.SimpleMessage)
  })
_sym_db.RegisterMessage(SimpleMessage)

if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _SIMPLEMESSAGE._serialized_start=32
  _SIMPLEMESSAGE._serialized_end=113
# @@protoc_insertion_point(module_scope)
