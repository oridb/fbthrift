/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>
#include <boost/operators.hpp>




namespace cpp2 {

class MyStruct;

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1
};

extern const std::map<MyEnum, const char*> _MyEnum_VALUES_TO_NAMES;
extern const std::map<const char*, MyEnum, apache::thrift::ltstr> _MyEnum_NAMES_TO_VALUES;

} // cpp2
namespace std {

template<> struct hash<typename  ::cpp2::MyEnum> : public apache::thrift::detail::enum_hash<typename  ::cpp2::MyEnum> {};
template<> struct equal_to<typename  ::cpp2::MyEnum> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::MyEnum> {};

} // std
namespace apache { namespace thrift {

template <> const char* TEnumTraitsBase< ::cpp2::MyEnum>::findName( ::cpp2::MyEnum value);
template <> bool TEnumTraitsBase< ::cpp2::MyEnum>::findValue(const char* name,  ::cpp2::MyEnum* outValue);

template <> constexpr  ::cpp2::MyEnum TEnumTraits< ::cpp2::MyEnum>::min() {
  return  ::cpp2::MyEnum::MyValue1;
}

template <> constexpr  ::cpp2::MyEnum TEnumTraits< ::cpp2::MyEnum>::max() {
  return  ::cpp2::MyEnum::MyValue2;
}

}} // apache::thrift
namespace cpp2 {

class MyStruct : private boost::totally_ordered<MyStruct> {
 public:

  MyStruct() :
      MyIntField(0) {}
  // FragileConstructor for use in initialization lists only

  MyStruct(apache::thrift::FragileConstructor, int64_t MyIntField__arg, std::string MyStringField__arg) :
      MyIntField(std::move(MyIntField__arg)),
      MyStringField(std::move(MyStringField__arg)) {}

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;

  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();

  virtual ~MyStruct() throw() {}

  int64_t MyIntField;
  std::string MyStringField;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      MyIntField = false;
      MyStringField = false;
    }

    bool MyIntField;
    bool MyStringField;
  } __isset;
  bool operator==(const MyStruct& rhs) const;

  bool operator < (const MyStruct& rhs) const {
    if (!(MyIntField == rhs.MyIntField)) {
      return MyIntField < rhs.MyIntField;
    }
    if (!(MyStringField == rhs.MyStringField)) {
      return MyStringField < rhs.MyStringField;
    }
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(MyStruct& a, MyStruct& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyStruct>::clear( ::cpp2::MyStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::write(Protocol* proto, const  ::cpp2::MyStruct* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::read(Protocol* proto,   ::cpp2::MyStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSize(Protocol* proto, const  ::cpp2::MyStruct* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSizeZC(Protocol* proto, const  ::cpp2::MyStruct* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2