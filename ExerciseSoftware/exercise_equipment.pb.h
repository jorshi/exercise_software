// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: exercise_equipment.proto

#ifndef PROTOBUF_exercise_5fequipment_2eproto__INCLUDED
#define PROTOBUF_exercise_5fequipment_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_exercise_5fequipment_2eproto();
void protobuf_AssignDesc_exercise_5fequipment_2eproto();
void protobuf_ShutdownFile_exercise_5fequipment_2eproto();

class ExerciseEquipment;

// ===================================================================

class ExerciseEquipment : public ::google::protobuf::Message {
 public:
  ExerciseEquipment();
  virtual ~ExerciseEquipment();

  ExerciseEquipment(const ExerciseEquipment& from);

  inline ExerciseEquipment& operator=(const ExerciseEquipment& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExerciseEquipment& default_instance();

  void Swap(ExerciseEquipment* other);

  // implements Message ----------------------------------------------

  ExerciseEquipment* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExerciseEquipment& from);
  void MergeFrom(const ExerciseEquipment& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  inline ::std::string* release_type();
  inline void set_allocated_type(::std::string* type);

  // @@protoc_insertion_point(class_scope:ExerciseEquipment)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* type_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_exercise_5fequipment_2eproto();
  friend void protobuf_AssignDesc_exercise_5fequipment_2eproto();
  friend void protobuf_ShutdownFile_exercise_5fequipment_2eproto();

  void InitAsDefaultInstance();
  static ExerciseEquipment* default_instance_;
};
// ===================================================================


// ===================================================================

// ExerciseEquipment

// required int32 id = 1;
inline bool ExerciseEquipment::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExerciseEquipment::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExerciseEquipment::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExerciseEquipment::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ExerciseEquipment::id() const {
  // @@protoc_insertion_point(field_get:ExerciseEquipment.id)
  return id_;
}
inline void ExerciseEquipment::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:ExerciseEquipment.id)
}

// required string type = 2;
inline bool ExerciseEquipment::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExerciseEquipment::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExerciseEquipment::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExerciseEquipment::clear_type() {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_->clear();
  }
  clear_has_type();
}
inline const ::std::string& ExerciseEquipment::type() const {
  // @@protoc_insertion_point(field_get:ExerciseEquipment.type)
  return *type_;
}
inline void ExerciseEquipment::set_type(const ::std::string& value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(value);
  // @@protoc_insertion_point(field_set:ExerciseEquipment.type)
}
inline void ExerciseEquipment::set_type(const char* value) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(value);
  // @@protoc_insertion_point(field_set_char:ExerciseEquipment.type)
}
inline void ExerciseEquipment::set_type(const char* value, size_t size) {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ExerciseEquipment.type)
}
inline ::std::string* ExerciseEquipment::mutable_type() {
  set_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    type_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:ExerciseEquipment.type)
  return type_;
}
inline ::std::string* ExerciseEquipment::release_type() {
  clear_has_type();
  if (type_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = type_;
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ExerciseEquipment::set_allocated_type(::std::string* type) {
  if (type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete type_;
  }
  if (type) {
    set_has_type();
    type_ = type;
  } else {
    clear_has_type();
    type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:ExerciseEquipment.type)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_exercise_5fequipment_2eproto__INCLUDED