/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/server_info.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_ADMIN_V3_SERVER_INFO_PROTO_UPB_H_
#define ENVOY_ADMIN_V3_SERVER_INFO_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_admin_v3_ServerInfo;
struct envoy_admin_v3_CommandLineOptions;
typedef struct envoy_admin_v3_ServerInfo envoy_admin_v3_ServerInfo;
typedef struct envoy_admin_v3_CommandLineOptions envoy_admin_v3_CommandLineOptions;
extern const upb_MiniTable envoy_admin_v3_ServerInfo_msginit;
extern const upb_MiniTable envoy_admin_v3_CommandLineOptions_msginit;
struct envoy_config_core_v3_Node;
struct google_protobuf_Duration;
extern const upb_MiniTable envoy_config_core_v3_Node_msginit;
extern const upb_MiniTable google_protobuf_Duration_msginit;

typedef enum {
  envoy_admin_v3_CommandLineOptions_Gradual = 0,
  envoy_admin_v3_CommandLineOptions_Immediate = 1
} envoy_admin_v3_CommandLineOptions_DrainStrategy;

typedef enum {
  envoy_admin_v3_CommandLineOptions_v4 = 0,
  envoy_admin_v3_CommandLineOptions_v6 = 1
} envoy_admin_v3_CommandLineOptions_IpVersion;

typedef enum {
  envoy_admin_v3_CommandLineOptions_Serve = 0,
  envoy_admin_v3_CommandLineOptions_Validate = 1,
  envoy_admin_v3_CommandLineOptions_InitOnly = 2
} envoy_admin_v3_CommandLineOptions_Mode;

typedef enum {
  envoy_admin_v3_ServerInfo_LIVE = 0,
  envoy_admin_v3_ServerInfo_DRAINING = 1,
  envoy_admin_v3_ServerInfo_PRE_INITIALIZING = 2,
  envoy_admin_v3_ServerInfo_INITIALIZING = 3
} envoy_admin_v3_ServerInfo_State;



/* envoy.admin.v3.ServerInfo */

UPB_INLINE envoy_admin_v3_ServerInfo* envoy_admin_v3_ServerInfo_new(upb_Arena* arena) {
  return (envoy_admin_v3_ServerInfo*)_upb_Message_New(&envoy_admin_v3_ServerInfo_msginit, arena);
}
UPB_INLINE envoy_admin_v3_ServerInfo* envoy_admin_v3_ServerInfo_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_ServerInfo* ret = envoy_admin_v3_ServerInfo_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_ServerInfo_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_ServerInfo* envoy_admin_v3_ServerInfo_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_ServerInfo* ret = envoy_admin_v3_ServerInfo_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_ServerInfo_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_ServerInfo_serialize(const envoy_admin_v3_ServerInfo* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_admin_v3_ServerInfo_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_admin_v3_ServerInfo_serialize_ex(const envoy_admin_v3_ServerInfo* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_admin_v3_ServerInfo_msginit, options, arena, len);
}
UPB_INLINE upb_StringView envoy_admin_v3_ServerInfo_version(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), upb_StringView);
}
UPB_INLINE int32_t envoy_admin_v3_ServerInfo_state(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t);
}
UPB_INLINE bool envoy_admin_v3_ServerInfo_has_uptime_current_epoch(const envoy_admin_v3_ServerInfo *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Duration* envoy_admin_v3_ServerInfo_uptime_current_epoch(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(24, 40), const struct google_protobuf_Duration*);
}
UPB_INLINE bool envoy_admin_v3_ServerInfo_has_uptime_all_epochs(const envoy_admin_v3_ServerInfo *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_Duration* envoy_admin_v3_ServerInfo_uptime_all_epochs(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(28, 48), const struct google_protobuf_Duration*);
}
UPB_INLINE upb_StringView envoy_admin_v3_ServerInfo_hot_restart_version(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 24), upb_StringView);
}
UPB_INLINE bool envoy_admin_v3_ServerInfo_has_command_line_options(const envoy_admin_v3_ServerInfo *msg) { return _upb_hasbit(msg, 3); }
UPB_INLINE const envoy_admin_v3_CommandLineOptions* envoy_admin_v3_ServerInfo_command_line_options(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(32, 56), const envoy_admin_v3_CommandLineOptions*);
}
UPB_INLINE bool envoy_admin_v3_ServerInfo_has_node(const envoy_admin_v3_ServerInfo *msg) { return _upb_hasbit(msg, 4); }
UPB_INLINE const struct envoy_config_core_v3_Node* envoy_admin_v3_ServerInfo_node(const envoy_admin_v3_ServerInfo* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(36, 64), const struct envoy_config_core_v3_Node*);
}

UPB_INLINE void envoy_admin_v3_ServerInfo_set_version(envoy_admin_v3_ServerInfo *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_ServerInfo_set_state(envoy_admin_v3_ServerInfo *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}
UPB_INLINE void envoy_admin_v3_ServerInfo_set_uptime_current_epoch(envoy_admin_v3_ServerInfo *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(24, 40), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_admin_v3_ServerInfo_mutable_uptime_current_epoch(envoy_admin_v3_ServerInfo *msg, upb_Arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_admin_v3_ServerInfo_uptime_current_epoch(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_Message_New(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_ServerInfo_set_uptime_current_epoch(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_ServerInfo_set_uptime_all_epochs(envoy_admin_v3_ServerInfo *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(28, 48), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_admin_v3_ServerInfo_mutable_uptime_all_epochs(envoy_admin_v3_ServerInfo *msg, upb_Arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_admin_v3_ServerInfo_uptime_all_epochs(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_Message_New(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_ServerInfo_set_uptime_all_epochs(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_ServerInfo_set_hot_restart_version(envoy_admin_v3_ServerInfo *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 24), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_ServerInfo_set_command_line_options(envoy_admin_v3_ServerInfo *msg, envoy_admin_v3_CommandLineOptions* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(32, 56), envoy_admin_v3_CommandLineOptions*) = value;
}
UPB_INLINE struct envoy_admin_v3_CommandLineOptions* envoy_admin_v3_ServerInfo_mutable_command_line_options(envoy_admin_v3_ServerInfo *msg, upb_Arena *arena) {
  struct envoy_admin_v3_CommandLineOptions* sub = (struct envoy_admin_v3_CommandLineOptions*)envoy_admin_v3_ServerInfo_command_line_options(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_CommandLineOptions*)_upb_Message_New(&envoy_admin_v3_CommandLineOptions_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_ServerInfo_set_command_line_options(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_ServerInfo_set_node(envoy_admin_v3_ServerInfo *msg, struct envoy_config_core_v3_Node* value) {
  _upb_sethas(msg, 4);
  *UPB_PTR_AT(msg, UPB_SIZE(36, 64), struct envoy_config_core_v3_Node*) = value;
}
UPB_INLINE struct envoy_config_core_v3_Node* envoy_admin_v3_ServerInfo_mutable_node(envoy_admin_v3_ServerInfo *msg, upb_Arena *arena) {
  struct envoy_config_core_v3_Node* sub = (struct envoy_config_core_v3_Node*)envoy_admin_v3_ServerInfo_node(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_Node*)_upb_Message_New(&envoy_config_core_v3_Node_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_ServerInfo_set_node(msg, sub);
  }
  return sub;
}

/* envoy.admin.v3.CommandLineOptions */

UPB_INLINE envoy_admin_v3_CommandLineOptions* envoy_admin_v3_CommandLineOptions_new(upb_Arena* arena) {
  return (envoy_admin_v3_CommandLineOptions*)_upb_Message_New(&envoy_admin_v3_CommandLineOptions_msginit, arena);
}
UPB_INLINE envoy_admin_v3_CommandLineOptions* envoy_admin_v3_CommandLineOptions_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_admin_v3_CommandLineOptions* ret = envoy_admin_v3_CommandLineOptions_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_CommandLineOptions_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_admin_v3_CommandLineOptions* envoy_admin_v3_CommandLineOptions_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_admin_v3_CommandLineOptions* ret = envoy_admin_v3_CommandLineOptions_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_admin_v3_CommandLineOptions_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_admin_v3_CommandLineOptions_serialize(const envoy_admin_v3_CommandLineOptions* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_admin_v3_CommandLineOptions_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_admin_v3_CommandLineOptions_serialize_ex(const envoy_admin_v3_CommandLineOptions* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_admin_v3_CommandLineOptions_msginit, options, arena, len);
}
UPB_INLINE uint64_t envoy_admin_v3_CommandLineOptions_base_id(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint64_t);
}
UPB_INLINE uint32_t envoy_admin_v3_CommandLineOptions_concurrency(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(28, 28), uint32_t);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_config_path(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(52, 56), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_config_yaml(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(60, 72), upb_StringView);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_allow_unknown_static_fields(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(40, 40), bool);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_admin_address_path(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(68, 88), upb_StringView);
}
UPB_INLINE int32_t envoy_admin_v3_CommandLineOptions_local_address_ip_version(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(16, 16), int32_t);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_log_level(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(76, 104), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_component_log_level(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(84, 120), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_log_format(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(92, 136), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_log_path(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(100, 152), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_service_cluster(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(108, 168), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_service_node(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(116, 184), upb_StringView);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_service_zone(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(124, 200), upb_StringView);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_has_file_flush_interval(const envoy_admin_v3_CommandLineOptions *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Duration* envoy_admin_v3_CommandLineOptions_file_flush_interval(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(148, 248), const struct google_protobuf_Duration*);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_has_drain_time(const envoy_admin_v3_CommandLineOptions *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_Duration* envoy_admin_v3_CommandLineOptions_drain_time(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(152, 256), const struct google_protobuf_Duration*);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_has_parent_shutdown_time(const envoy_admin_v3_CommandLineOptions *msg) { return _upb_hasbit(msg, 3); }
UPB_INLINE const struct google_protobuf_Duration* envoy_admin_v3_CommandLineOptions_parent_shutdown_time(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(156, 264), const struct google_protobuf_Duration*);
}
UPB_INLINE int32_t envoy_admin_v3_CommandLineOptions_mode(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(20, 20), int32_t);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_disable_hot_restart(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(41, 41), bool);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_enable_mutex_tracing(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(42, 42), bool);
}
UPB_INLINE uint32_t envoy_admin_v3_CommandLineOptions_restart_epoch(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(32, 32), uint32_t);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_cpuset_threads(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(43, 43), bool);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_reject_unknown_dynamic_fields(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(44, 44), bool);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_log_format_escaped(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(45, 45), bool);
}
UPB_INLINE upb_StringView const* envoy_admin_v3_CommandLineOptions_disabled_extensions(const envoy_admin_v3_CommandLineOptions *msg, size_t *len) { return (upb_StringView const*)_upb_array_accessor(msg, UPB_SIZE(160, 272), len); }
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_ignore_unknown_dynamic_fields(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(46, 46), bool);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_use_dynamic_base_id(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(47, 47), bool);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_base_id_path(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(132, 216), upb_StringView);
}
UPB_INLINE int32_t envoy_admin_v3_CommandLineOptions_drain_strategy(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(24, 24), int32_t);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_enable_fine_grain_logging(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(48, 48), bool);
}
UPB_INLINE upb_StringView envoy_admin_v3_CommandLineOptions_socket_path(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(140, 232), upb_StringView);
}
UPB_INLINE uint32_t envoy_admin_v3_CommandLineOptions_socket_mode(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(36, 36), uint32_t);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_enable_core_dump(const envoy_admin_v3_CommandLineOptions* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(49, 49), bool);
}
UPB_INLINE upb_StringView const* envoy_admin_v3_CommandLineOptions_stats_tag(const envoy_admin_v3_CommandLineOptions *msg, size_t *len) { return (upb_StringView const*)_upb_array_accessor(msg, UPB_SIZE(164, 280), len); }

UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_base_id(envoy_admin_v3_CommandLineOptions *msg, uint64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), uint64_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_concurrency(envoy_admin_v3_CommandLineOptions *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(28, 28), uint32_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_config_path(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(52, 56), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_config_yaml(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(60, 72), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_allow_unknown_static_fields(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(40, 40), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_admin_address_path(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(68, 88), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_local_address_ip_version(envoy_admin_v3_CommandLineOptions *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 16), int32_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_log_level(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(76, 104), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_component_log_level(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(84, 120), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_log_format(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(92, 136), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_log_path(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(100, 152), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_service_cluster(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(108, 168), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_service_node(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(116, 184), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_service_zone(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(124, 200), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_file_flush_interval(envoy_admin_v3_CommandLineOptions *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(148, 248), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_admin_v3_CommandLineOptions_mutable_file_flush_interval(envoy_admin_v3_CommandLineOptions *msg, upb_Arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_admin_v3_CommandLineOptions_file_flush_interval(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_Message_New(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_CommandLineOptions_set_file_flush_interval(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_drain_time(envoy_admin_v3_CommandLineOptions *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(152, 256), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_admin_v3_CommandLineOptions_mutable_drain_time(envoy_admin_v3_CommandLineOptions *msg, upb_Arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_admin_v3_CommandLineOptions_drain_time(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_Message_New(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_CommandLineOptions_set_drain_time(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_parent_shutdown_time(envoy_admin_v3_CommandLineOptions *msg, struct google_protobuf_Duration* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(156, 264), struct google_protobuf_Duration*) = value;
}
UPB_INLINE struct google_protobuf_Duration* envoy_admin_v3_CommandLineOptions_mutable_parent_shutdown_time(envoy_admin_v3_CommandLineOptions *msg, upb_Arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_admin_v3_CommandLineOptions_parent_shutdown_time(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_Message_New(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_admin_v3_CommandLineOptions_set_parent_shutdown_time(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_mode(envoy_admin_v3_CommandLineOptions *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(20, 20), int32_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_disable_hot_restart(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(41, 41), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_enable_mutex_tracing(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(42, 42), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_restart_epoch(envoy_admin_v3_CommandLineOptions *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(32, 32), uint32_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_cpuset_threads(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(43, 43), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_reject_unknown_dynamic_fields(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(44, 44), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_log_format_escaped(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(45, 45), bool) = value;
}
UPB_INLINE upb_StringView* envoy_admin_v3_CommandLineOptions_mutable_disabled_extensions(envoy_admin_v3_CommandLineOptions *msg, size_t *len) {
  return (upb_StringView*)_upb_array_mutable_accessor(msg, UPB_SIZE(160, 272), len);
}
UPB_INLINE upb_StringView* envoy_admin_v3_CommandLineOptions_resize_disabled_extensions(envoy_admin_v3_CommandLineOptions *msg, size_t len, upb_Arena *arena) {
  return (upb_StringView*)_upb_Array_Resize_accessor2(msg, UPB_SIZE(160, 272), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_add_disabled_extensions(envoy_admin_v3_CommandLineOptions *msg, upb_StringView val, upb_Arena *arena) {
  return _upb_Array_Append_accessor2(msg, UPB_SIZE(160, 272), UPB_SIZE(3, 4), &val,
      arena);
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_ignore_unknown_dynamic_fields(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(46, 46), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_use_dynamic_base_id(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(47, 47), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_base_id_path(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(132, 216), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_drain_strategy(envoy_admin_v3_CommandLineOptions *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 24), int32_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_enable_fine_grain_logging(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(48, 48), bool) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_socket_path(envoy_admin_v3_CommandLineOptions *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(140, 232), upb_StringView) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_socket_mode(envoy_admin_v3_CommandLineOptions *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(36, 36), uint32_t) = value;
}
UPB_INLINE void envoy_admin_v3_CommandLineOptions_set_enable_core_dump(envoy_admin_v3_CommandLineOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(49, 49), bool) = value;
}
UPB_INLINE upb_StringView* envoy_admin_v3_CommandLineOptions_mutable_stats_tag(envoy_admin_v3_CommandLineOptions *msg, size_t *len) {
  return (upb_StringView*)_upb_array_mutable_accessor(msg, UPB_SIZE(164, 280), len);
}
UPB_INLINE upb_StringView* envoy_admin_v3_CommandLineOptions_resize_stats_tag(envoy_admin_v3_CommandLineOptions *msg, size_t len, upb_Arena *arena) {
  return (upb_StringView*)_upb_Array_Resize_accessor2(msg, UPB_SIZE(164, 280), len, UPB_SIZE(3, 4), arena);
}
UPB_INLINE bool envoy_admin_v3_CommandLineOptions_add_stats_tag(envoy_admin_v3_CommandLineOptions *msg, upb_StringView val, upb_Arena *arena) {
  return _upb_Array_Append_accessor2(msg, UPB_SIZE(164, 280), UPB_SIZE(3, 4), &val,
      arena);
}

extern const upb_MiniTable_File envoy_admin_v3_server_info_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_ADMIN_V3_SERVER_INFO_PROTO_UPB_H_ */
