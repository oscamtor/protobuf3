// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: complex.proto

#include "complex.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace example {
namespace complex {
constexpr ComplexMessage::ComplexMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : multiple_dummy_()
  , one_dummy_(nullptr){}
struct ComplexMessageDefaultTypeInternal {
  constexpr ComplexMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ComplexMessageDefaultTypeInternal() {}
  union {
    ComplexMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ComplexMessageDefaultTypeInternal _ComplexMessage_default_instance_;
constexpr DummyMessage::DummyMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(0){}
struct DummyMessageDefaultTypeInternal {
  constexpr DummyMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~DummyMessageDefaultTypeInternal() {}
  union {
    DummyMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT DummyMessageDefaultTypeInternal _DummyMessage_default_instance_;
}  // namespace complex
}  // namespace example
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_complex_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_complex_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_complex_2eproto = nullptr;

const uint32_t TableStruct_complex_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::example::complex::ComplexMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::example::complex::ComplexMessage, one_dummy_),
  PROTOBUF_FIELD_OFFSET(::example::complex::ComplexMessage, multiple_dummy_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::example::complex::DummyMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::example::complex::DummyMessage, id_),
  PROTOBUF_FIELD_OFFSET(::example::complex::DummyMessage, name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::example::complex::ComplexMessage)},
  { 8, -1, -1, sizeof(::example::complex::DummyMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::example::complex::_ComplexMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::example::complex::_DummyMessage_default_instance_),
};

const char descriptor_table_protodef_complex_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcomplex.proto\022\017example.complex\"y\n\016Comp"
  "lexMessage\0220\n\tone_dummy\030\002 \001(\0132\035.example."
  "complex.DummyMessage\0225\n\016multiple_dummy\030\003"
  " \003(\0132\035.example.complex.DummyMessage\"(\n\014D"
  "ummyMessage\022\n\n\002id\030\001 \001(\005\022\014\n\004name\030\002 \001(\tb\006p"
  "roto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_complex_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_complex_2eproto = {
  false, false, 205, descriptor_table_protodef_complex_2eproto, "complex.proto", 
  &descriptor_table_complex_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_complex_2eproto::offsets,
  file_level_metadata_complex_2eproto, file_level_enum_descriptors_complex_2eproto, file_level_service_descriptors_complex_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_complex_2eproto_getter() {
  return &descriptor_table_complex_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_complex_2eproto(&descriptor_table_complex_2eproto);
namespace example {
namespace complex {

// ===================================================================

class ComplexMessage::_Internal {
 public:
  static const ::example::complex::DummyMessage& one_dummy(const ComplexMessage* msg);
};

const ::example::complex::DummyMessage&
ComplexMessage::_Internal::one_dummy(const ComplexMessage* msg) {
  return *msg->one_dummy_;
}
ComplexMessage::ComplexMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  multiple_dummy_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:example.complex.ComplexMessage)
}
ComplexMessage::ComplexMessage(const ComplexMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      multiple_dummy_(from.multiple_dummy_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_one_dummy()) {
    one_dummy_ = new ::example::complex::DummyMessage(*from.one_dummy_);
  } else {
    one_dummy_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:example.complex.ComplexMessage)
}

inline void ComplexMessage::SharedCtor() {
one_dummy_ = nullptr;
}

ComplexMessage::~ComplexMessage() {
  // @@protoc_insertion_point(destructor:example.complex.ComplexMessage)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ComplexMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete one_dummy_;
}

void ComplexMessage::ArenaDtor(void* object) {
  ComplexMessage* _this = reinterpret_cast< ComplexMessage* >(object);
  (void)_this;
}
void ComplexMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ComplexMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ComplexMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:example.complex.ComplexMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  multiple_dummy_.Clear();
  if (GetArenaForAllocation() == nullptr && one_dummy_ != nullptr) {
    delete one_dummy_;
  }
  one_dummy_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ComplexMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .example.complex.DummyMessage one_dummy = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_one_dummy(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .example.complex.DummyMessage multiple_dummy = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_multiple_dummy(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ComplexMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:example.complex.ComplexMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .example.complex.DummyMessage one_dummy = 2;
  if (this->_internal_has_one_dummy()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::one_dummy(this), target, stream);
  }

  // repeated .example.complex.DummyMessage multiple_dummy = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_multiple_dummy_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_multiple_dummy(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:example.complex.ComplexMessage)
  return target;
}

size_t ComplexMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:example.complex.ComplexMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .example.complex.DummyMessage multiple_dummy = 3;
  total_size += 1UL * this->_internal_multiple_dummy_size();
  for (const auto& msg : this->multiple_dummy_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .example.complex.DummyMessage one_dummy = 2;
  if (this->_internal_has_one_dummy()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *one_dummy_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ComplexMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ComplexMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ComplexMessage::GetClassData() const { return &_class_data_; }

void ComplexMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ComplexMessage *>(to)->MergeFrom(
      static_cast<const ComplexMessage &>(from));
}


void ComplexMessage::MergeFrom(const ComplexMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:example.complex.ComplexMessage)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  multiple_dummy_.MergeFrom(from.multiple_dummy_);
  if (from._internal_has_one_dummy()) {
    _internal_mutable_one_dummy()->::example::complex::DummyMessage::MergeFrom(from._internal_one_dummy());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ComplexMessage::CopyFrom(const ComplexMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:example.complex.ComplexMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ComplexMessage::IsInitialized() const {
  return true;
}

void ComplexMessage::InternalSwap(ComplexMessage* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  multiple_dummy_.InternalSwap(&other->multiple_dummy_);
  swap(one_dummy_, other->one_dummy_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ComplexMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_complex_2eproto_getter, &descriptor_table_complex_2eproto_once,
      file_level_metadata_complex_2eproto[0]);
}

// ===================================================================

class DummyMessage::_Internal {
 public:
};

DummyMessage::DummyMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:example.complex.DummyMessage)
}
DummyMessage::DummyMessage(const DummyMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(), 
      GetArenaForAllocation());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:example.complex.DummyMessage)
}

inline void DummyMessage::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
id_ = 0;
}

DummyMessage::~DummyMessage() {
  // @@protoc_insertion_point(destructor:example.complex.DummyMessage)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void DummyMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void DummyMessage::ArenaDtor(void* object) {
  DummyMessage* _this = reinterpret_cast< DummyMessage* >(object);
  (void)_this;
}
void DummyMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void DummyMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void DummyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:example.complex.DummyMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty();
  id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DummyMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "example.complex.DummyMessage.name"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* DummyMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:example.complex.DummyMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "example.complex.DummyMessage.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:example.complex.DummyMessage)
  return target;
}

size_t DummyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:example.complex.DummyMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DummyMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    DummyMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DummyMessage::GetClassData() const { return &_class_data_; }

void DummyMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<DummyMessage *>(to)->MergeFrom(
      static_cast<const DummyMessage &>(from));
}


void DummyMessage::MergeFrom(const DummyMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:example.complex.DummyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _internal_set_name(from._internal_name());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DummyMessage::CopyFrom(const DummyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:example.complex.DummyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DummyMessage::IsInitialized() const {
  return true;
}

void DummyMessage::InternalSwap(DummyMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DummyMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_complex_2eproto_getter, &descriptor_table_complex_2eproto_once,
      file_level_metadata_complex_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace complex
}  // namespace example
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::example::complex::ComplexMessage* Arena::CreateMaybeMessage< ::example::complex::ComplexMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::example::complex::ComplexMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::example::complex::DummyMessage* Arena::CreateMaybeMessage< ::example::complex::DummyMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::example::complex::DummyMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
