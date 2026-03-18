#pragma once
/*
 * sajat ArduCopter config delivery-hez
 * kiszallitasi funkciokhoz optimalizalva (tobbnyire)
 * Holybro X650 + Pixhawk 6C target - lidar, cam, gimbal, mount feature-ok mind disabled (jovoben kellhet)
 */

// ============================================================================
// FLIGHT MODES
// ============================================================================

// DISABLE (ezek asszem nem kellenek, de majd illene atnezni megegyszer)
#define MODE_ACRO_ENABLED           DISABLED  // Advanced aerobatic mode
#define MODE_SPORT_ENABLED          DISABLED  // Sport/racing mode  
#define MODE_DRIFT_ENABLED          DISABLED  // Car-like flying
#define MODE_CIRCLE_ENABLED         DISABLED  // Circle around point
#define MODE_FLIP_ENABLED           DISABLED  // Auto-flip maneuvers
#define MODE_AUTOTUNE_ENABLED       DISABLED  // PID autotuning
#define MODE_POSHOLD_ENABLED        DISABLED  // GPS position hold
#define MODE_BRAKE_ENABLED          DISABLED  // Rapid deceleration
#define MODE_THROW_ENABLED          DISABLED  // Hand launch mode
#define MODE_AVOID_ADSB_ENABLED     DISABLED  // ADSB collision avoidance
#define MODE_GUIDED_NOGPS_ENABLED   DISABLED  // Guided without GPS
#define MODE_SMARTRTL_ENABLED       DISABLED  // Smart return to launch
#define MODE_FLOWHOLD_ENABLED       DISABLED  // Optical flow hold
#define MODE_FOLLOW_ENABLED         DISABLED  // Follow-me mode
#define MODE_ZIGZAG_ENABLED         DISABLED  // Zigzag photography
#define MODE_SYSTEMID_ENABLED       DISABLED  // System identification
#define MODE_AUTOROTATE_ENABLED     DISABLED  // Helicopter autorotate

// ENABLE
#define MODE_STABILIZE_ENABLED      ENABLED   // Manual flight with stabilization
#define MODE_ALT_HOLD_ENABLED       ENABLED   // Altitude hold (useful for testing)
#define MODE_LOITER_ENABLED         ENABLED   // GPS position hold (backup)
#define MODE_GUIDED_ENABLED         ENABLED   // DroneKit control mode
#define MODE_AUTO_ENABLED           ENABLED   // Mission/waypoint mode
#define MODE_RTL_ENABLED            ENABLED   // Return to launch (safety)
#define MODE_LAND_ENABLED           ENABLED   // Controlled landing

// ============================================================================
// CAMERA, GIMBAL, MOUNT FEATURES - minden disable
// ============================================================================

#define CAMERA_ENABLED              DISABLED  // Camera triggering
#define MOUNT_ENABLED               DISABLED  // Gimbal/camera mount control
#define GIMBAL_ENABLED              DISABLED  // Advanced gimbal support

// ============================================================================
// ADVANCED NAVIGATION - minden disable
// ============================================================================

#define PRECISION_LANDING           DISABLED  // Precision landing with vision
#define TERRAIN_ENABLED             DISABLED  // Terrain following
#define OPTFLOW_ENABLED             DISABLED  // Optical flow navigation
#define BEACON_ENABLED              DISABLED  // Beacon position systems

// ============================================================================
// PAYLOAD AND ACCESSORY FEATURES
// ============================================================================

#define AP_GRIPPER_ENABLED          DISABLED  // Servo gripper
#define SPRAYER_ENABLED             DISABLED  // Agricultural sprayer
#define EPM_ENABLED                 DISABLED  // Electro-permanent magnet
#define LANDING_GEAR_ENABLED        DISABLED  // Retractable landing gear
#define PARACHUTE_ENABLED           DISABLED  // Emergency parachute
#define WINCH_ENABLED               ENABLED  // Cargo winch
#define SERVO_ENABLED               ENABLED   // basic servo (csorlo-hoz kellhet)

// ============================================================================
// USER INTERFACE AND TELEMETRY - minden disable (egyelore, de itt azert vannak hasznosak!)
// ============================================================================

#define SCRIPTING_ENABLED           DISABLED  // Lua scripting
#define OSD_ENABLED                 DISABLED  // On-screen display
#define FRSKY_TELEM_ENABLED         DISABLED  // FrSky telemetry
#define CRSF_TELEM_ENABLED          DISABLED  // CRSF telemetry
#define STATS_ENABLED               DISABLED  // Flight statistics

// ============================================================================
// FRAME CONFIGURATION - csak quad frame config egyelore
// ============================================================================

#define FRAME_CONFIG                QUAD_FRAME
#define AP_MOTORS_DENSITY_COMP      ENABLED   // Keep motor compensation

// ============================================================================
// SENSOR LIMITS - 
// ============================================================================

// sensor instance-ek
#define COMPASS_MAX_INSTANCES       1         // Default: 3, egyelore 1 eleg
#define GPS_MAX_RECEIVERS           1         // Default: 2, single gps egyelore eleg
#define INS_MAX_INSTANCES           1         // Default: 3, single IMU egyelore eleg
#define BARO_MAX_INSTANCES          1         // Default: 3, single barometer egyelore eleg

// ============================================================================
// SENSOR FEATURES - minden disable
// ============================================================================

#define AP_RANGEFINDER_ENABLED      DISABLED  // Lidar/sonar (unless you add lidar)
#define AP_PROXIMITY_ENABLED        DISABLED  // 360° proximity sensors
#define AP_AIRSPEED_ENABLED         DISABLED  // Airspeed sensors (copter doesn't need)
#define RPM_ENABLED                 DISABLED  // RPM sensors

// ============================================================================
// SAFETY AND FAILSAFE - ezek egyelore enable, nem mertem hozzanyulni
// ============================================================================

#define AP_FENCE_ENABLED            ENABLED   // Geofencing
#define FAILSAFE_ENABLED            ENABLED   // failsafe systems
#define AP_NOTIFY_ENABLED           ENABLED   // LED/buzzer notifications

// ============================================================================
// LOGGING - debughoz egyelore enable minden
// ============================================================================

#define HAL_LOGGING_ENABLED         ENABLED   // logging
#define HAL_LOGGING_DATAFLASH_ENABLED ENABLED // DataFlash logging
#define HAL_LOGGING_MAVLINK_ENABLED ENABLED   // MAVLink logging

// ============================================================================
// COMMUNICATION
// ============================================================================

#define HAL_GCS_ENABLED             ENABLED   // Ground Control Station comms
#define AP_MAVLINK_ENABLED          ENABLED   // MAVLink protocol (DroneKit py library-hez ez kell!!)
#define AP_MAVLINK_BATTERY2_ENABLED DISABLED  // Secondary battery monitoring

// ============================================================================
// MISSION AND NAVIGATION
// ============================================================================

#define AP_MISSION_ENABLED          ENABLED   // Mission/waypoint system
#define AP_RALLY_ENABLED            ENABLED   // Rally points (backup landing sites)

// Reduce mission complexity
#define AP_MISSION_MAX_NUM_DO_JUMP_COMMANDS 5    // Default: 15
#define MISSION_MAX_WP              100          // Max waypoints (AMENNYI KELL)

// ============================================================================
// BATTERY MONITORING - marad minden enabled - fontosak!! delivery-hez
// ============================================================================

#define AP_BATTERY_ENABLED          ENABLED   // Battery monitoring
#define AP_BATTERY_SMBUS_ENABLED    ENABLED   // Smart battery support
#define AP_BATTERY_WATTMAX_ENABLED  ENABLED   // Power limiting

// ============================================================================
// MOTOR AND ESC - marad minden enabled
// ============================================================================

#define AP_MOTORS_ENABLED           ENABLED   // Motor control
#define AP_DSHOT_ENABLED            ENABLED   // DShot ESC protocol

// ============================================================================
// DEVELOPER AND TESTING
// ============================================================================

#define HAL_DEBUG_ENABLED           DISABLED  // Debug features
#define AP_SIM_ENABLED              DISABLED  // SITL simulation features
#define AP_UNITTEST_ENABLED         DISABLED  // Unit tests

// ============================================================================
// MEMORY OPTIMIZATIONS
// ============================================================================

// parameter storage
#define AP_PARAM_MAX_EMBEDDED_PARAM 512       // Default: tobb

// scheduler table size
#define SCHEDULER_MAX_TIMER_PROCS   8         // Default: tobb

// ============================================================================
// DELIVERY-SPECIFIC OPTIMIZATIONS
// ============================================================================

// Optimize for delivery
#define WPNAV_SPEED_DEFAULT         1000      // Default waypoint speed (cm/s)
#define WPNAV_RADIUS_DEFAULT        100       // Default waypoint radius (cm) 
#define LAND_SPEED_DEFAULT          100       // Landing speed (cm/s)

// Battery failsafe optimized for delivery return
#define BATT_LOW_VOLT_DEFAULT       10.5      // Low battery voltage
#define BATT_CRT_VOLT_DEFAULT       10.0      // Critical battery voltage

// end of config_delivery.h