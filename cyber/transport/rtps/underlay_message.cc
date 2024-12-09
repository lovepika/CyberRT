// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file UnderlayMessage.cpp
 * This source file contains the definition of the described types in the IDL
 *file.
 *
 * This file was generated by the tool gen.
 */

#include "cyber/transport/rtps/underlay_message.h"

namespace apollo {
namespace cyber {
namespace transport {

#define UnderlayMessage_max_cdr_typesize 276ULL;
#define UnderlayMessage_max_key_cdr_typesize 0ULL;

UnderlayMessage::UnderlayMessage() {
  m_timestamp = 0;
  m_seq = 0;
  m_data = "";
}

UnderlayMessage::~UnderlayMessage() {}

UnderlayMessage::UnderlayMessage(const UnderlayMessage& x) {
  m_timestamp = x.m_timestamp;
  m_seq = x.m_seq;
  m_data = x.m_data;
}

UnderlayMessage::UnderlayMessage(UnderlayMessage&& x) {
  m_timestamp = x.m_timestamp;
  m_seq = x.m_seq;
  m_data = std::move(x.m_data);
}

UnderlayMessage& UnderlayMessage::operator=(const UnderlayMessage& x) {
  m_timestamp = x.m_timestamp;
  m_seq = x.m_seq;
  m_data = x.m_data;

  return *this;
}

UnderlayMessage& UnderlayMessage::operator=(UnderlayMessage&& x) {
  m_timestamp = x.m_timestamp;
  m_seq = x.m_seq;
  m_data = std::move(x.m_data);

  return *this;
}

size_t UnderlayMessage::getMaxCdrSerializedSize(size_t current_alignment) {
  return UnderlayMessage_max_cdr_typesize;
}

size_t UnderlayMessage::getCdrSerializedSize(const UnderlayMessage& data,
                                             size_t current_alignment) {
  size_t initial_alignment = current_alignment;

  current_alignment +=
      8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

  current_alignment +=
      8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);

  current_alignment += 4 +
                       eprosima::fastcdr::Cdr::alignment(current_alignment, 4) +
                       data.data().size() + 1;

  return current_alignment - initial_alignment;
}

void UnderlayMessage::serialize(eprosima::fastcdr::Cdr& scdr) const {
  scdr << m_timestamp;
  scdr << m_seq;
  scdr << m_data;
}

void UnderlayMessage::deserialize(eprosima::fastcdr::Cdr& dcdr) {
  dcdr >> m_timestamp;
  dcdr >> m_seq;
  dcdr >> m_data;
}

size_t UnderlayMessage::getKeyMaxCdrSerializedSize(size_t current_alignment) {
  return UnderlayMessage_max_key_cdr_typesize;
}

bool UnderlayMessage::isKeyDefined() { return false; }

void UnderlayMessage::serializeKey(eprosima::fastcdr::Cdr& scdr) const {
  (void)scdr;
}

}  // namespace transport
}  // namespace cyber
}  // namespace apollo
