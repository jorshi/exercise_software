// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: exercise_equipment.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "exercise_equipment.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ExerciseEquipment_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ExerciseEquipment_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_exercise_5fequipment_2eproto() {
  protobuf_AddDesc_exercise_5fequipment_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "exercise_equipment.proto");
  GOOGLE_CHECK(file != NULL);
  ExerciseEquipment_descriptor_ = file->message_type(0);
  static const int ExerciseEquipment_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExerciseEquipment, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExerciseEquipment, type_),
  };
  ExerciseEquipment_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ExerciseEquipment_descriptor_,
      ExerciseEquipment::default_instance_,
      ExerciseEquipment_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExerciseEquipment, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ExerciseEquipment, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ExerciseEquipment));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_exercise_5fequipment_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ExerciseEquipment_descriptor_, &ExerciseEquipment::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_exercise_5fequipment_2eproto() {
  delete ExerciseEquipment::default_instance_;
  delete ExerciseEquipment_reflection_;
}

void protobuf_AddDesc_exercise_5fequipment_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030exercise_equipment.proto\"-\n\021ExerciseEq"
    "uipment\022\n\n\002id\030\001 \002(\005\022\014\n\004type\030\002 \002(\t", 73);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "exercise_equipment.proto", &protobuf_RegisterTypes);
  ExerciseEquipment::default_instance_ = new ExerciseEquipment();
  ExerciseEquipment::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_exercise_5fequipment_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_exercise_5fequipment_2eproto {
  StaticDescriptorInitializer_exercise_5fequipment_2eproto() {
    protobuf_AddDesc_exercise_5fequipment_2eproto();
  }
} static_descriptor_initializer_exercise_5fequipment_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ExerciseEquipment::kIdFieldNumber;
const int ExerciseEquipment::kTypeFieldNumber;
#endif  // !_MSC_VER

ExerciseEquipment::ExerciseEquipment()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ExerciseEquipment)
}

void ExerciseEquipment::InitAsDefaultInstance() {
}

ExerciseEquipment::ExerciseEquipment(const ExerciseEquipment& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ExerciseEquipment)
}

void ExerciseEquipment::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ExerciseEquipment::~ExerciseEquipment() {
  // @@protoc_insertion_point(destructor:ExerciseEquipment)
  SharedDtor();
}

void ExerciseEquipment::SharedDtor() {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete type_;
  }
  if (this != default_instance_) {
  }
}

void ExerciseEquipment::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ExerciseEquipment::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ExerciseEquipment_descriptor_;
}

const ExerciseEquipment& ExerciseEquipment::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_exercise_5fequipment_2eproto();
  return *default_instance_;
}

ExerciseEquipment* ExerciseEquipment::default_instance_ = NULL;

ExerciseEquipment* ExerciseEquipment::New() const {
  return new ExerciseEquipment;
}

void ExerciseEquipment::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    id_ = 0;
    if (has_type()) {
      if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        type_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ExerciseEquipment::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ExerciseEquipment)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_type;
        break;
      }

      // required string type = 2;
      case 2: {
        if (tag == 18) {
         parse_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->type().data(), this->type().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "type");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ExerciseEquipment)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ExerciseEquipment)
  return false;
#undef DO_
}

void ExerciseEquipment::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ExerciseEquipment)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ExerciseEquipment)
}

::google::protobuf::uint8* ExerciseEquipment::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ExerciseEquipment)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string type = 2;
  if (has_type()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ExerciseEquipment)
  return target;
}

int ExerciseEquipment::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // required string type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ExerciseEquipment::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ExerciseEquipment* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ExerciseEquipment*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ExerciseEquipment::MergeFrom(const ExerciseEquipment& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ExerciseEquipment::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ExerciseEquipment::CopyFrom(const ExerciseEquipment& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExerciseEquipment::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ExerciseEquipment::Swap(ExerciseEquipment* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ExerciseEquipment::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ExerciseEquipment_descriptor_;
  metadata.reflection = ExerciseEquipment_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)