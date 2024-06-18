/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_SQL_RESOLVER_CMD_OB_ALTER_EVENT_STMT_
#define OCEANBASE_SQL_RESOLVER_CMD_OB_ALTER_EVENT_STMT_

#include "sql/resolver/cmd/ob_cmd_stmt.h"
#include "lib/string/ob_strings.h"
#include "share/ob_define.h"

namespace oceanbase
{
namespace sql
{
class ObAlterEventStmt: public ObCMDStmt
{
public:
  explicit ObAlterEventStmt(common::ObIAllocator *name_pool);
  ObAlterEventStmt();
  virtual ~ObAlterEventStmt() = default;

  inline void set_tenant_id(const uint64_t id) { tenant_id_ = id; }
  inline void set_event_definer(const char *event_definer) {  event_definer_ = event_definer; }
  inline void set_event_definer(const common::ObString &event_definer) {  event_definer_ = event_definer; }
  inline void set_event_name(const common::ObString &event_name) {  event_name_ = event_name; }
  inline void set_event_body(const common::ObString &event_body) {  event_body_ = event_body; }
  inline void set_event_comment(const common::ObString &event_comment) {  event_comment_ = event_comment; }
  inline void set_repeat_interval(const common::ObString &repeat_interval) {  repeat_interval_ = repeat_interval; }
  inline void set_repeat_ts(const int64_t repeat_ts) { repeat_ts_ = repeat_ts; }
  inline void set_is_enable(const int32_t is_enable) { is_enable_ = is_enable; }
  inline void set_auto_drop(const int32_t auto_drop) { auto_drop_ = auto_drop; }
  inline void set_start_time(const int64_t start_time) { start_time_ = start_time;  }
  inline void set_end_time(const int64_t end_time) { end_time_ = end_time; }
  inline void set_event_rename(const common::ObString &event_rename) {  event_rename_ = event_rename; }
  inline void set_event_database(const common::ObString &event_database) {  event_database_ = event_database; }
  inline uint64_t get_tenant_id() const { return tenant_id_; }
  inline const common::ObString &get_event_definer() const { return event_definer_; }
  inline const common::ObString &get_event_name() const { return event_name_; }
  inline const common::ObString &get_event_body() const { return event_body_; }
  inline const common::ObString &get_event_comment() const { return event_comment_; }
  inline int32_t get_is_enable() const { return is_enable_; }
  inline int32_t get_auto_drop() const { return auto_drop_; }
  inline const common::ObString &get_repeat_interval() const { return repeat_interval_; }
  inline int64_t get_repeat_ts() const { return repeat_ts_; }
  inline int64_t get_start_time() const { return start_time_; }
  inline int64_t get_end_time() const { return end_time_; }
  inline const common::ObString &get_event_rename() const { return event_rename_; }
  inline const common::ObString &get_event_database() const { return event_database_; }
  DECLARE_VIRTUAL_TO_STRING;
private:
  // data members
  uint64_t tenant_id_;
  int64_t start_time_;
  int64_t end_time_;
  int32_t is_enable_;
  int32_t auto_drop_;
  int64_t repeat_ts_;
  common::ObString event_definer_;
  common::ObString event_database_;
  common::ObString event_name_;
  common::ObString repeat_interval_;
  common::ObString event_body_;
  common::ObString event_comment_;
  common::ObString event_rename_;

private:
  DISALLOW_COPY_AND_ASSIGN(ObAlterEventStmt);
};
} // end namespace sql
} // end namespace oceanbase
#endif //OCEANBASE_SQL_RESOLVER_CMD_OB_ALTER_EVENT_STMT_