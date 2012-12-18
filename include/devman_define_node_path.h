#ifndef __DEVMAN_DEFINE_NODE_PATH_H
#define __DEVMAN_DEFINE_NODE_PATH_H

#define BACKLIGHT_PATH "/sys/class/backlight/"
#define BACKLIGHT_MIN_BRIGHTNESS_PATH	BACKLIGHT_PATH"%s/min_brightness"
#define BACKLIGHT_MAX_BRIGHTNESS_PATH	BACKLIGHT_PATH"%s/max_brightness"
#define BACKLIGHT_BRIGHTNESS_PATH 	BACKLIGHT_PATH"%s/brightness"
#define BACKLIGHT_DIMMING_PATH	BACKLIGHT_PATH"%s/dimming"
#define LCD_PATH  "/sys/class/lcd/"
#define LCD_ACL_CONTROL_PATH	LCD_PATH"%s/acl_control"
#define LCD_POWER_PATH			LCD_PATH"%s/lcd_power"

//#define DISPLAY_FRAME_RATE_PATH	"/sys/devices/platform/maru-display/devfreq/maru-display/max_freq"

#define UART_PATH			"/sys/devices/platform/uart-select/path"
#define USB_PATH			"/sys/devices/platform/usb-switch/path"

#define HAPTIC_VIBETONES_LEVEL_PATH	"/sys/class/haptic/vibetones/level"
#define HAPTIC_VIBETONES_LEVEL_MAX_PATH	"/sys/class/haptic/vibetones/level_max"
#define HAPTIC_VIBETONES_ENABLE_PATH	"/sys/class/haptic/vibetones/enable"
#define HAPTIC_VIBETONES_ONESHOT_PATH	"/sys/class/haptic/vibetones/oneshot"

#define BATTERY_CAPACITY_PATH		"/sys/class/power_supply/battery/capacity"
#define BATTERY_CHARGE_FULL_PATH	"/sys/class/power_supply/battery/charge_full"
#define BATTERY_CHARGE_NOW_PATH		"/sys/class/power_supply/battery/charge_now"
#define BATTERY_PRESENT_PATH		"/sys/class/power_supply/battery/present"
#define BATTERY_HEALTH_PATH		"/sys/class/power_supply/battery/health"

#define JACK_CHARGER_ONLINE_PATH	"/sys/devices/platform/jack/charger_online"
#define JACK_EARJACK_ONLINE_PATH	"/sys/devices/platform/jack/earjack_online"
#define JACK_EARKEY_ONLINE_PATH		"/sys/devices/platform/jack/earkey_online"
#define JACK_HDMI_ONLINE_PATH		"/sys/devices/platform/jack/hdmi_online"
#define JACK_USB_ONLINE_PATH		"/sys/devices/platform/jack/usb_online"
#define JACK_CRADLE_ONLINE_PATH		"/sys/devices/platform/jack/cradle_online"
#define JACK_TVOUT_ONLINE_PATH		"/sys/devices/platform/jack/tvout_online"
#define JACK_KEYBOARD_ONLINE_PATH	"/sys/devices/platform/jack/keyboard_online"

#define LEDS_TORCH_MAX_BRIGHTNESS_PATH	"/sys/class/leds/leds-torch/max_brightness"
#define LEDS_TORCH_BRIGHTNESS_PATH	"/sys/class/leds/leds-torch/brightness"

#define POWER_STATE_PATH		"/sys/power/state"
#define POWER_WAKEUP_COUNT_PATH		"/sys/power/wakeup_count"

#define MEMNOTIFY_NODE			"/dev/memnotify"
#define MEMNOTIFY_VICTIM_TASK_PATH	"/sys/class/memnotify/victim_task"
#define MEMNOTIFY_THRESHOLD_LV1_PATH	"/sys/class/memnotify/threshold_lv1"
#define MEMNOTIFY_THRESHOLD_LV2_PATH	"/sys/class/memnotify/threshold_lv2"

#define TOUCH_EVENT_NODE		"/dev/event2"

#define PROCESS_MONITOR_NODE		"/dev/pmon"
#define PROCESS_MONITOR_MP_PNP_PATH	"/sys/class/pmon/mp_pnp"
#define PROCESS_MONITOR_MP_VIP_PATH	"/sys/class/pmon/mp_vip"

#define CPUFREQ_CPUINFO_MAX_FREQ_PATH	"/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq"
#define CPUFREQ_CPUINFO_MIN_FREQ_PATH	"/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq"
#define CPUFREQ_SCALING_MAX_FREQ_PATH	"/sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq"
#define CPUFREQ_SCALING_MIN_FREQ_PATH	"/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq"

#endif /* __DEVMAN_DEFINE_NODE_PATH_H */
