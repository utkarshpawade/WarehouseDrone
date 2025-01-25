// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from waypoint_navigation:action/NavToWaypoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_Goal_type_support_ids_t;

static const _NavToWaypoint_Goal_type_support_ids_t _NavToWaypoint_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_Goal_type_support_symbol_names_t _NavToWaypoint_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_Goal)),
  }
};

typedef struct _NavToWaypoint_Goal_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_Goal_type_support_data_t;

static _NavToWaypoint_Goal_type_support_data_t _NavToWaypoint_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_Goal_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_Goal>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_Goal)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_Result_type_support_ids_t;

static const _NavToWaypoint_Result_type_support_ids_t _NavToWaypoint_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_Result_type_support_symbol_names_t _NavToWaypoint_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_Result)),
  }
};

typedef struct _NavToWaypoint_Result_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_Result_type_support_data_t;

static _NavToWaypoint_Result_type_support_data_t _NavToWaypoint_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_Result_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_Result_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_Result_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_Result>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_Result)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_Feedback_type_support_ids_t;

static const _NavToWaypoint_Feedback_type_support_ids_t _NavToWaypoint_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_Feedback_type_support_symbol_names_t _NavToWaypoint_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_Feedback)),
  }
};

typedef struct _NavToWaypoint_Feedback_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_Feedback_type_support_data_t;

static _NavToWaypoint_Feedback_type_support_data_t _NavToWaypoint_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_Feedback_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_Feedback>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_Feedback)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_SendGoal_Request_type_support_ids_t;

static const _NavToWaypoint_SendGoal_Request_type_support_ids_t _NavToWaypoint_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_SendGoal_Request_type_support_symbol_names_t _NavToWaypoint_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal_Request)),
  }
};

typedef struct _NavToWaypoint_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_SendGoal_Request_type_support_data_t;

static _NavToWaypoint_SendGoal_Request_type_support_data_t _NavToWaypoint_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_SendGoal_Request_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_SendGoal_Request>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal_Request)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_SendGoal_Response_type_support_ids_t;

static const _NavToWaypoint_SendGoal_Response_type_support_ids_t _NavToWaypoint_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_SendGoal_Response_type_support_symbol_names_t _NavToWaypoint_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal_Response)),
  }
};

typedef struct _NavToWaypoint_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_SendGoal_Response_type_support_data_t;

static _NavToWaypoint_SendGoal_Response_type_support_data_t _NavToWaypoint_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_SendGoal_Response_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_SendGoal_Response>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal_Response)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_SendGoal_type_support_ids_t;

static const _NavToWaypoint_SendGoal_type_support_ids_t _NavToWaypoint_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_SendGoal_type_support_symbol_names_t _NavToWaypoint_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_SendGoal)),
  }
};

typedef struct _NavToWaypoint_SendGoal_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_SendGoal_type_support_data_t;

static _NavToWaypoint_SendGoal_type_support_data_t _NavToWaypoint_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_SendGoal_service_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavToWaypoint_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation::action::NavToWaypoint_SendGoal>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_GetResult_Request_type_support_ids_t;

static const _NavToWaypoint_GetResult_Request_type_support_ids_t _NavToWaypoint_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_GetResult_Request_type_support_symbol_names_t _NavToWaypoint_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_GetResult_Request)),
  }
};

typedef struct _NavToWaypoint_GetResult_Request_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_GetResult_Request_type_support_data_t;

static _NavToWaypoint_GetResult_Request_type_support_data_t _NavToWaypoint_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_GetResult_Request_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_GetResult_Request>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_GetResult_Request)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_GetResult_Response_type_support_ids_t;

static const _NavToWaypoint_GetResult_Response_type_support_ids_t _NavToWaypoint_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_GetResult_Response_type_support_symbol_names_t _NavToWaypoint_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_GetResult_Response)),
  }
};

typedef struct _NavToWaypoint_GetResult_Response_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_GetResult_Response_type_support_data_t;

static _NavToWaypoint_GetResult_Response_type_support_data_t _NavToWaypoint_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_GetResult_Response_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_GetResult_Response>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_GetResult_Response)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_GetResult_type_support_ids_t;

static const _NavToWaypoint_GetResult_type_support_ids_t _NavToWaypoint_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_GetResult_type_support_symbol_names_t _NavToWaypoint_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_GetResult)),
  }
};

typedef struct _NavToWaypoint_GetResult_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_GetResult_type_support_data_t;

static _NavToWaypoint_GetResult_type_support_data_t _NavToWaypoint_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_GetResult_service_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t NavToWaypoint_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<waypoint_navigation::action::NavToWaypoint_GetResult>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _NavToWaypoint_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _NavToWaypoint_FeedbackMessage_type_support_ids_t;

static const _NavToWaypoint_FeedbackMessage_type_support_ids_t _NavToWaypoint_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _NavToWaypoint_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _NavToWaypoint_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _NavToWaypoint_FeedbackMessage_type_support_symbol_names_t _NavToWaypoint_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, waypoint_navigation, action, NavToWaypoint_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, waypoint_navigation, action, NavToWaypoint_FeedbackMessage)),
  }
};

typedef struct _NavToWaypoint_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _NavToWaypoint_FeedbackMessage_type_support_data_t;

static _NavToWaypoint_FeedbackMessage_type_support_data_t _NavToWaypoint_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _NavToWaypoint_FeedbackMessage_message_typesupport_map = {
  2,
  "waypoint_navigation",
  &_NavToWaypoint_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_NavToWaypoint_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_NavToWaypoint_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t NavToWaypoint_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_NavToWaypoint_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_FeedbackMessage>()
{
  return &::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, waypoint_navigation, action, NavToWaypoint_FeedbackMessage)() {
  return get_message_type_support_handle<waypoint_navigation::action::NavToWaypoint_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "waypoint_navigation/action/detail/nav_to_waypoint__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace waypoint_navigation
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t NavToWaypoint_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace waypoint_navigation

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<waypoint_navigation::action::NavToWaypoint>()
{
  using ::waypoint_navigation::action::rosidl_typesupport_cpp::NavToWaypoint_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  NavToWaypoint_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::waypoint_navigation::action::NavToWaypoint::Impl::SendGoalService>();
  NavToWaypoint_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::waypoint_navigation::action::NavToWaypoint::Impl::GetResultService>();
  NavToWaypoint_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::waypoint_navigation::action::NavToWaypoint::Impl::CancelGoalService>();
  NavToWaypoint_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::waypoint_navigation::action::NavToWaypoint::Impl::FeedbackMessage>();
  NavToWaypoint_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::waypoint_navigation::action::NavToWaypoint::Impl::GoalStatusMessage>();
  return &NavToWaypoint_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
