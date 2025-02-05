// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_APP_SHADEDEVICEFORTWO506_H
#define SILABS_APP_SHADEDEVICEFORTWO506_H


/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "ShadeDeviceForTwo506"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_GROUPS_CLUSTER_SERVER
#define ZCL_USING_SCENES_CLUSTER_SERVER
#define ZCL_USING_ON_OFF_CLUSTER_SERVER
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER
#define ZCL_USING_OTA_BOOTLOAD_CLUSTER_CLIENT
#define ZCL_USING_GREEN_POWER_CLUSTER_CLIENT
#define ZCL_USING_SHADE_CONFIG_CLUSTER_SERVER
#define ZCL_USING_VC_MFG_SYS_CONFIG_CLUSTER_SERVER
#define ZCL_USING_VC_MFG_EXTENSION_CLUSTER_SERVER
/**** Optional Attributes ****/
#define ZCL_USING_BASIC_CLUSTER_APPLICATION_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_STACK_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_HW_VERSION_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MANUFACTURER_NAME_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_MODEL_IDENTIFIER_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_DATE_CODE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_GENERIC_DEVICE_CLASS_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_GENERIC_DEVICE_TYPE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_PRODUCT_CODE_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_PRODUCT_URL_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_SW_BUILD_ID_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_SIMON_EXT_OEM_SELECT_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_TUYA_AUTH_2_BUF_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_TUYA_AUTH_1_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_TUYA_AUTH_2_ATTRIBUTE 
#define ZCL_USING_BASIC_CLUSTER_BASIC_CLUSTER_REPORTING_STATUS_SERVER_ATTRIBUTE 
#define ZCL_USING_ON_OFF_CLUSTER_GLOBAL_SCENE_CONTROL_ATTRIBUTE 
#define ZCL_USING_ON_OFF_CLUSTER_ON_TIME_ATTRIBUTE 
#define ZCL_USING_ON_OFF_CLUSTER_OFF_WAIT_TIME_ATTRIBUTE 
#define ZCL_USING_ON_OFF_CLUSTER_START_UP_ON_OFF_ATTRIBUTE 
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_REMAINING_TIME_ATTRIBUTE 
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_OPTIONS_ATTRIBUTE 
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_START_UP_CURRENT_LEVEL_ATTRIBUTE 
#define ZCL_USING_VC_MFG_SYS_CONFIG_CLUSTER_ATTRIBUTE_MFG_SYSTEM_MANUFACTURE_ID_ATTRIBUTE 
#define ZCL_USING_VC_MFG_SYS_CONFIG_CLUSTER_ATTRIBUTE_MFG_SYSTEM_MODE_ID_ATTRIBUTE 
#define ZCL_USING_VC_MFG_SYS_CONFIG_CLUSTER_ATTRIBUTE_MFG_SYSTEM_MODE_ATTRIBUTE 
#define ZCL_USING_VC_MFG_EXTENSION_CLUSTER_ATTRIBUTE_MFG_INDICATOR_STATE_ATTRIBUTE 
#define ZCL_USING_VC_MFG_EXTENSION_CLUSTER_ATTRIBUTE_MFG_KIDSLOCK_STATE_ATTRIBUTE 
#define ZCL_USING_VC_MFG_EXTENSION_CLUSTER_ATTRIBUTE_MFG_KEY_STATE_ATTRIBUTE 
#define ZCL_USING_VC_MFG_EXTENSION_CLUSTER_ATTRIBUTE_MFG_TIME_SCALE_ATTRIBUTE 
#define ZCL_USING_VC_MFG_EXTENSION_CLUSTER_ATTRIBUTE_MFG_MOVE_DIRECTION_ATTRIBUTE 
#define EMBER_AF_MANUFACTURER_CODE 0x1254
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_ALWAYS

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (2)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_GROUPS_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_SCENES_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_OTA_BOOTLOAD_CLUSTER_CLIENT_ENDPOINT_COUNT (2)
#define EMBER_AF_GREEN_POWER_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_SHADE_CONFIG_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_VC_MFG_SYS_CONFIG_CLUSTER_SERVER_ENDPOINT_COUNT (2)
#define EMBER_AF_VC_MFG_EXTENSION_CLUSTER_SERVER_ENDPOINT_COUNT (2)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_Z3

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_BOOST

/**** HAL Section ****/
#define ZA_CLI_FULL

/**** Callback Section ****/
#define EMBER_CALLBACK_MAIN_INIT
#define EMBER_CALLBACK_STACK_STATUS
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_NET_WRITE
#define EMBER_CALLBACK_MAIN_START
#define EMBER_CALLBACK_MAIN_TICK
#define EMBER_CALLBACK_REPORT_ATTRIBUTES_RESPONSE
#define EMBER_CALLBACK_VC_MFG_EXTENSION_CLUSTER_TRANSPARENT_REQUEST
#define EMBER_CALLBACK_VC_MFG_EXTENSION_CLUSTER_ZIGBEE_EXTEND_REQ
#define EMBER_CALLBACK_BASIC_CLUSTER_TUYA_EXT_RESET
#define EMBER_CALLBACK_BASIC_CLUSTER_BASIC_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_EEPROM_INIT
#define EMBER_CALLBACK_EEPROM_NOTE_INITIALIZED_STATE
#define EMBER_CALLBACK_EEPROM_SHUTDOWN
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_INIT
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_READ
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_WRITE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_DOWNLOAD_FINISH
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_INVALIDATE_IMAGE
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_RETRIEVE_LAST_STORED_OFFSET
#define EMBER_CALLBACK_OTA_STORAGE_DRIVER_PREPARE_TO_RESUME_DOWNLOAD
#define EMBER_CALLBACK_ENERGY_SCAN_RESULT
#define EMBER_CALLBACK_SCAN_COMPLETE
#define EMBER_CALLBACK_NETWORK_FOUND
#define EMBER_CALLBACK_SCENES_CLUSTER_SCENES_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_SCENES_CLUSTER_ADD_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_VIEW_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_ALL_SCENES
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_RECALL_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_GET_SCENE_MEMBERSHIP
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_CURRENT_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_RECALL_SAVED_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_CLEAR_SCENE_TABLE
#define EMBER_CALLBACK_SCENES_CLUSTER_SCENES_CLUSTER_MAKE_INVALID
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENES_IN_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_GROUPS_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_GROUPS_CLUSTER_ADD_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_VIEW_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_GET_GROUP_MEMBERSHIP
#define EMBER_CALLBACK_GROUPS_CLUSTER_REMOVE_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_REMOVE_ALL_GROUPS
#define EMBER_CALLBACK_GROUPS_CLUSTER_ADD_GROUP_IF_IDENTIFYING
#define EMBER_CALLBACK_GROUPS_CLUSTER_ENDPOINT_IN_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_CLEAR_GROUP_TABLE
#define EMBER_CALLBACK_SCENES_CLUSTER_ENHANCED_ADD_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_ENHANCED_VIEW_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_COPY_SCENE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_NOTIFICATION_RESPONSE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_PAIRING
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_PROXY_COMMISSIONING_MODE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_RESPONSE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_SINK_TABLE_RESPONSE
#define EMBER_CALLBACK_GREEN_POWER_CLUSTER_GP_PROXY_TABLE_REQUEST
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_ON_OFF_CLUSTER_OFF_WITH_EFFECT
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_WITH_RECALL_GLOBAL_SCENE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_WITH_TIMED_OFF
#define EMBER_CALLBACK_CONFIGURE_REPORTING_COMMAND
#define EMBER_CALLBACK_READ_REPORTING_CONFIGURATION_COMMAND
#define EMBER_CALLBACK_CLEAR_REPORT_TABLE
#define EMBER_CALLBACK_REPORTING_ATTRIBUTE_CHANGE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP_WITH_ON_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_LEVEL_CONTROL_EFFECT
#define EMBER_CALLBACK_OTA_BOOTLOAD
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_INIT
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_TICK
#define EMBER_CALLBACK_OTA_CLIENT_INCOMING_MESSAGE_RAW
#define EMBER_CALLBACK_OTA_CLIENT_START
#define EMBER_CALLBACK_OTA_BOOTLOAD_CLUSTER_OTA_BOOTLOAD_CLUSTER_CLIENT_DEFAULT_RESPONSE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_ON_OFF_CLUSTER_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON
#define EMBER_CALLBACK_ON_OFF_CLUSTER_TOGGLE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SET_VALUE
#define EMBER_CALLBACK_OTA_CLIENT_VERSION_INFO
#define EMBER_CALLBACK_OTA_CLIENT_DOWNLOAD_COMPLETE
#define EMBER_CALLBACK_OTA_CLIENT_BOOTLOAD
#define EMBER_CALLBACK_OTA_CLIENT_CUSTOM_VERIFY_CALLBACK
#define EMBER_CALLBACK_HAL_BUTTON_ISR
#define EMBER_CALLBACK_MAC_FILTER_MATCH_MESSAGE
#define EMBER_APPLICATION_HAS_MAC_FILTER_MATCH_MESSAGE_HANDLER
#define EMBER_CALLBACK_EZSP_MAC_FILTER_MATCH_MESSAGE
#define EZSP_APPLICATION_HAS_MAC_FILTER_MATCH_HANDLER
#define EMBER_CALLBACK_INTERPAN_SEND_MESSAGE
#define EMBER_CALLBACK_COUNTER_HANDLER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER
#define EMBER_CALLBACK_EZSP_COUNTER_ROLLOVER_HANDLER
#define EZSP_APPLICATION_HAS_COUNTER_ROLLOVER_HANDLER
#define EMBER_CALLBACK_BASIC_CLUSTER_RESET_TO_FACTORY_DEFAULTS
#define EMBER_CALLBACK_OTA_STORAGE_INIT
#define EMBER_CALLBACK_OTA_STORAGE_GET_COUNT
#define EMBER_CALLBACK_OTA_STORAGE_SEARCH
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_FIRST
#define EMBER_CALLBACK_OTA_STORAGE_ITERATOR_NEXT
#define EMBER_CALLBACK_OTA_STORAGE_CLEAR_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_WRITE_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_GET_FULL_HEADER
#define EMBER_CALLBACK_OTA_STORAGE_GET_TOTAL_IMAGE_SIZE
#define EMBER_CALLBACK_OTA_STORAGE_READ_IMAGE_DATA
#define EMBER_CALLBACK_OTA_STORAGE_CHECK_TEMP_DATA
#define EMBER_CALLBACK_OTA_STORAGE_FINISH_DOWNLOAD
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_APP 0x0002
#define EMBER_AF_PRINT_ZDO 0x0004
#define EMBER_AF_PRINT_BITS { 0x07 }
#define EMBER_AF_PRINT_NAMES { \
  "Core",\
  "Application",\
  "ZDO (ZigBee Device Object)",\
  NULL\
}
#define EMBER_AF_PRINT_NAME_NUMBER 3


#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY


// Generated plugin macros

// Use this macro to check if ADC plugin is included
#define EMBER_AF_PLUGIN_ADC

// Use this macro to check if AES-CMAC plugin is included
#define EMBER_AF_PLUGIN_AES_CMAC

// Use this macro to check if Antenna Stub plugin is included
#define EMBER_AF_PLUGIN_ANTENNA_STUB

// Use this macro to check if Basic Server Cluster plugin is included
#define EMBER_AF_PLUGIN_BASIC

// Use this macro to check if Binding Table Library plugin is included
#define EMBER_AF_PLUGIN_BINDING_TABLE_LIBRARY
// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 80

// Use this macro to check if Button Form/Join Code plugin is included
#define EMBER_AF_PLUGIN_BUTTON_JOINING
// User options for plugin Button Form/Join Code
#define EMBER_AF_PLUGIN_BUTTON_JOINING_PERMIT_JOIN_TIMEOUT 60

// Use this macro to check if Radio Coexistence plugin is included
#define EMBER_AF_PLUGIN_COEXISTENCE

// Use this macro to check if Counters plugin is included
#define EMBER_AF_PLUGIN_COUNTERS
// User options for plugin Counters

// Use this macro to check if Debug Basic Library plugin is included
#define EMBER_AF_PLUGIN_DEBUG_BASIC_LIBRARY

// Use this macro to check if Debug JTAG plugin is included
#define EMBER_AF_PLUGIN_DEBUG_JTAG

// Use this macro to check if EEPROM plugin is included
#define EMBER_AF_PLUGIN_EEPROM
// User options for plugin EEPROM
#define EMBER_AF_PLUGIN_EEPROM_PARTIAL_WORD_STORAGE_COUNT 2

// Use this macro to check if Ember Minimal Printf plugin is included
#define EMBER_AF_PLUGIN_EMBER_MINIMAL_PRINTF

// Use this macro to check if Find and Bind Target plugin is included
#define EMBER_AF_PLUGIN_FIND_AND_BIND_TARGET
// User options for plugin Find and Bind Target
#define EMBER_AF_PLUGIN_FIND_AND_BIND_TARGET_COMMISSIONING_TIME 180

// Use this macro to check if Form and Join Library plugin is included
#define EMBER_AF_PLUGIN_FORM_AND_JOIN

// Use this macro to check if Green Power Library plugin is included
#define EMBER_AF_PLUGIN_GP_LIBRARY
// User options for plugin Green Power Library
#define EMBER_GP_PROXY_TABLE_SIZE 5
#define EMBER_GP_SINK_TABLE_SIZE 0

// Use this macro to check if Green Power Client plugin is included
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT
#define EZSP_APPLICATION_HAS_GPEP_INCOMING_MESSAGE_HANDLER
#define EZSP_APPLICATION_HAS_DGP_SENT_HANDLER
// User options for plugin Green Power Client
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_GPP_COMMISSIONING_WINDOW 160
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_GPP_DUPLICATE_TIMEOUT_SEC 160
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_MAX_ADDR_ENTRIES 3
#define EMBER_AF_PLUGIN_GREEN_POWER_CLIENT_MAX_SEQ_NUM_ENTRIES_PER_ADDR 4

// Use this macro to check if Green Power Common plugin is included
#define EMBER_AF_PLUGIN_GREEN_POWER_COMMON

// Use this macro to check if Groups Server Cluster plugin is included
#define EMBER_AF_PLUGIN_GROUPS_SERVER

// Use this macro to check if HAL Library plugin is included
#define EMBER_AF_PLUGIN_HAL_LIBRARY

// Use this macro to check if Identify Cluster plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if Install Code Library plugin is included
#define EMBER_AF_PLUGIN_INSTALL_CODE_LIBRARY

// Use this macro to check if Interpan plugin is included
#define EMBER_AF_PLUGIN_INTERPAN
// User options for plugin Interpan
#define EMBER_AF_PLUGIN_INTERPAN_ALLOW_REQUIRED_SMART_ENERGY_MESSAGES
#define EMBER_AF_PLUGIN_INTERPAN_DELIVER_TO PRIMARY_ENDPOINT
#define EMBER_AF_PLUGIN_INTERPAN_DELIVER_TO_SPECIFIED_ENDPOINT_VALUE 1

// Use this macro to check if LED Blinking plugin is included
#define EMBER_AF_PLUGIN_LED_BLINK

// Use this macro to check if Level Control Server Cluster plugin is included
#define EMBER_AF_PLUGIN_LEVEL_CONTROL
// User options for plugin Level Control Server Cluster
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MAXIMUM_LEVEL 255
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MINIMUM_LEVEL 0
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE 0

// Use this macro to check if Network Steering plugin is included
#define EMBER_AF_PLUGIN_NETWORK_STEERING
// User options for plugin Network Steering
#define EMBER_AF_PLUGIN_NETWORK_STEERING_CHANNEL_MASK 0x0318C800
#define EMBER_AF_PLUGIN_NETWORK_STEERING_RADIO_TX_POWER 8
#define EMBER_AF_PLUGIN_NETWORK_STEERING_SCAN_DURATION 5
#define EMBER_AF_PLUGIN_NETWORK_STEERING_COMMISSIONING_TIME_S 180

// Use this macro to check if On/Off Server Cluster plugin is included
#define EMBER_AF_PLUGIN_ON_OFF

// Use this macro to check if OTA Cluster Platform Bootloader plugin is included
#define EMBER_AF_PLUGIN_OTA_BOOTLOAD
// User options for plugin OTA Cluster Platform Bootloader
#define EMBER_AF_PLUGIN_OTA_BOOTLOAD_UART_HOST_REBOOT

// Use this macro to check if OTA Bootload Cluster Client plugin is included
#define EMBER_AF_PLUGIN_OTA_CLIENT
// User options for plugin OTA Bootload Cluster Client
#define EMBER_AF_PLUGIN_OTA_CLIENT_SET_IMAGE_STAMP
#define EMBER_AF_PLUGIN_OTA_CLIENT_QUERY_DELAY_MINUTES 5
#define EMBER_AF_PLUGIN_OTA_CLIENT_QUERY_ERROR_THRESHOLD 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_DOWNLOAD_DELAY_MS 0
#define EMBER_AF_PLUGIN_OTA_CLIENT_DOWNLOAD_ERROR_THRESHOLD 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_UPGRADE_WAIT_THRESHOLD 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_SERVER_DISCOVERY_DELAY_MINUTES 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_RUN_UPGRADE_REQUEST_DELAY_MINUTES 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_PAGE_REQUEST_SIZE 1024
#define EMBER_AF_PLUGIN_OTA_CLIENT_PAGE_REQUEST_TIMEOUT_SECONDS 5
#define EMBER_AF_PLUGIN_OTA_CLIENT_VERIFY_DELAY_MS 10
#define EMBER_AF_PLUGIN_OTA_CLIENT_SIGNER_EUI0 { 0x00, 0x0D, 0x6F, 0x00, 0x00, 0x19, 0x8B, 0x36 }
#define EMBER_AF_PLUGIN_OTA_CLIENT_SIGNER_EUI1 { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_OTA_CLIENT_SIGNER_EUI2 { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_OTA_CLIENT_MIN_BLOCK_PERIOD_UNITS DISABLE_FEATURE
#define EMBER_AF_PLUGIN_OTA_CLIENT_IGNORE_LOOPBACK_SERVER

// Use this macro to check if OTA Bootload Cluster Client Policy plugin is included
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY
#define CUSTOMER_APPLICATION_VERSION EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_FIRMWARE_VERSION
// User options for plugin OTA Bootload Cluster Client Policy
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_IMAGE_TYPE_ID 770
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_FIRMWARE_VERSION 65
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_HARDWARE_VERSION 1
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_EBL_VERIFICATION
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_INCLUDE_HARDWARE_VERSION
#define EMBER_AF_PLUGIN_OTA_CLIENT_POLICY_DELETE_FAILED_DOWNLOADS

// Use this macro to check if OTA Bootload Cluster Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_COMMON

// Use this macro to check if OTA Bootload Cluster Storage Common Code plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_COMMON

// Use this macro to check if OTA Simple Storage Module plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE

// Use this macro to check if OTA Simple Storage EEPROM Driver plugin is included
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM
// User options for plugin OTA Simple Storage EEPROM Driver
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_SOC_BOOTLOADING_SUPPORT
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_GECKO_BOOTLOADER_STORAGE_SUPPORT DO_NOT_USE_SLOTS
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_SLOT_TO_USE 0
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_STORAGE_START 278528
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_STORAGE_END 520192
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_READ_MODIFY_WRITE_SUPPORT FALSE
#define EMBER_AF_PLUGIN_OTA_STORAGE_SIMPLE_EEPROM_DOWNLOAD_OFFSET_SAVE_RATE 1024

// Use this macro to check if RAIL Library plugin is included
#define EMBER_AF_PLUGIN_RAIL_LIBRARY
// User options for plugin RAIL Library
#define EMBER_AF_PLUGIN_RAIL_LIBRARY_RAILPHYDEF 1

// Use this macro to check if Reporting plugin is included
#define EMBER_AF_PLUGIN_REPORTING
// User options for plugin Reporting
#define EMBER_AF_PLUGIN_REPORTING_TABLE_SIZE 10
#define EMBER_AF_PLUGIN_REPORTING_ENABLE_GROUP_BOUND_REPORTS

// Use this macro to check if Scan Dispatch plugin is included
#define EMBER_AF_PLUGIN_SCAN_DISPATCH
// User options for plugin Scan Dispatch
#define EMBER_AF_PLUGIN_SCAN_DISPATCH_SCAN_QUEUE_SIZE 10

// Use this macro to check if Scenes Server Cluster plugin is included
#define EMBER_AF_PLUGIN_SCENES
// User options for plugin Scenes Server Cluster
#define EMBER_AF_PLUGIN_SCENES_TABLE_SIZE 80
#define EMBER_AF_PLUGIN_SCENES_NAME_SUPPORT
#define EMBER_AF_PLUGIN_SCENES_USE_TOKENS

// Use this macro to check if Security Core Library plugin is included
#define EMBER_AF_PLUGIN_SECURITY_LIBRARY_CORE
// User options for plugin Security Core Library
#define EMBER_TRANSIENT_KEY_TIMEOUT_S 300

// Use this macro to check if Serial plugin is included
#define EMBER_AF_PLUGIN_SERIAL

// Use this macro to check if Simulated EEPROM version 2 Library plugin is included
#define EMBER_AF_PLUGIN_SIM_EEPROM2
// User options for plugin Simulated EEPROM version 2 Library
#define EMBER_AF_PLUGIN_SIM_EEPROM2_PASSWORD "!spoon"
#define EMBER_AF_PLUGIN_SIM_EEPROM2_PASSWORD_LENGTH (6)

// Use this macro to check if Simulated EEPROM version 1 to version 2 Upgrade Stub plugin is included
#define EMBER_AF_PLUGIN_SIM_EEPROM2_1TO2_UPGRADE_STUB

// Use this macro to check if Simple Main plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_MAIN

// Use this macro to check if Update TC Link Key plugin is included
#define EMBER_AF_PLUGIN_UPDATE_TC_LINK_KEY

// Use this macro to check if ZigBee PRO Stack Library plugin is included
#define EMBER_AF_PLUGIN_ZIGBEE_PRO_LIBRARY
// User options for plugin ZigBee PRO Stack Library
#define EMBER_MAX_END_DEVICE_CHILDREN 6
#define EMBER_PACKET_BUFFER_COUNT 75
#define EMBER_END_DEVICE_POLL_TIMEOUT 5
#define EMBER_END_DEVICE_POLL_TIMEOUT_SHIFT 6
#define EMBER_LINK_POWER_DELTA_INTERVAL 300
#define EMBER_APS_UNICAST_MESSAGE_COUNT 10
#define EMBER_BROADCAST_TABLE_SIZE 15
#define EMBER_NEIGHBOR_TABLE_SIZE 16

// Use this macro to check if ZLL Level Control Server Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_LEVEL_CONTROL_SERVER

// Use this macro to check if ZigBee Light Link Library plugin is included
#define EMBER_AF_PLUGIN_ZLL_LIBRARY
// User options for plugin ZigBee Light Link Library
#define EMBER_ZLL_GROUP_ADDRESSES 0
#define EMBER_ZLL_RSSI_THRESHOLD -40

// Use this macro to check if ZLL On/Off Server Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_ON_OFF_SERVER

// Use this macro to check if ZLL Scenes Server Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_SCENES_SERVER


// Generated API headers

// API adc-cortexm3 from ADC plugin
#define EMBER_AF_API_ADC_CORTEXM3 "platform/base/hal/plugin/adc/adc-cortexm3.h"

// API adc from ADC plugin
#define EMBER_AF_API_ADC "platform/base/hal/plugin/adc/adc.h"

// API aes-cmac from AES-CMAC plugin
#define EMBER_AF_API_AES_CMAC "protocol/zigbee/app/framework/plugin/aes-cmac/aes-cmac.h"

// API antenna from Antenna Stub plugin
#define EMBER_AF_API_ANTENNA "platform/base/hal/plugin/antenna/antenna.h"

// API coexistence from Radio Coexistence plugin
#define EMBER_AF_API_COEXISTENCE "platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154/coexistence-802154.h"

// API eeprom from EEPROM plugin
#define EMBER_AF_API_EEPROM "util/plugin/plugin-common/eeprom/eeprom.h"

// API find-and-bind-target from Find and Bind Target plugin
#define EMBER_AF_API_FIND_AND_BIND_TARGET "protocol/zigbee/app/framework/plugin/find-and-bind-target/find-and-bind-target.h"

// API led-blink from LED Blinking plugin
#define EMBER_AF_API_LED_BLINK "util/plugin/plugin-common/led-blink/led-blink.h"

// API network-steering from Network Steering plugin
#define EMBER_AF_API_NETWORK_STEERING "protocol/zigbee/app/framework/plugin/network-steering/network-steering.h"

// API rail-library from RAIL Library plugin
#define EMBER_AF_API_RAIL_LIBRARY "platform/radio/rail_lib/common/rail.h"

// API scan-dispatch from Scan Dispatch plugin
#define EMBER_AF_API_SCAN_DISPATCH "protocol/zigbee/app/framework/plugin/scan-dispatch/scan-dispatch.h"

// API serial from Serial plugin
#define EMBER_AF_API_SERIAL "platform/base/hal/plugin/serial/serial.h"

// API sim-eeprom from Simulated EEPROM version 2 Library plugin
#define EMBER_AF_API_SIM_EEPROM "platform/base/hal/plugin/sim-eeprom/sim-eeprom.h"

// API update-tc-link-key from Update TC Link Key plugin
#define EMBER_AF_API_UPDATE_TC_LINK_KEY "protocol/zigbee/app/framework/plugin/update-tc-link-key/update-tc-link-key.h"


// Custom macros
#ifdef COMMISSIONING_STATUS_LED
#undef COMMISSIONING_STATUS_LED
#endif
#define COMMISSIONING_STATUS_LED BOARDLED2

#ifdef ON_OFF_LIGHT_LED
#undef ON_OFF_LIGHT_LED
#endif
#define ON_OFF_LIGHT_LED BOARDLED2

#ifdef LED_BLINK_PERIOD_MS
#undef LED_BLINK_PERIOD_MS
#endif
#define LED_BLINK_PERIOD_MS 2000



#endif // SILABS_APP_SHADEDEVICEFORTWO506_H
