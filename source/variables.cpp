#include "headers.hpp"

bool var_connect_test_succes = false;
bool var_need_reflesh = true;
bool var_allow_send_app_info = false;
bool var_night_mode = false;
bool var_eco_mode = true;
bool var_debug_mode = false;
bool var_flash_mode = false;
bool var_wifi_enabled = false;
bool var_history_enabled = true;
int var_autoplay_level = 2; // 0 : never, 1 : only in a playlist, 2 : always
int var_loop_mode = false;
bool var_show_fps = false;
bool var_full_screen_mode = false;
bool var_full_dislike_like_count = false;
bool var_video_show_debug_info = false;
bool var_video_linear_filter = true;
double var_forward_buffer_ratio = 0.8;
u8 var_wifi_state = 0;
u8 var_wifi_signal = 0;
u8 var_battery_charge = 0;
int var_hours = 0;
int var_minutes = 0;
int var_seconds = 0;
int var_days = 0;
int var_months = 0;
int var_years = 0;
int var_battery_level_raw = 0;
float var_afk_time = 0;
double var_dpad_scroll_speed0 = DPAD_SCROLL_SPEED0_DEFAULT;
double var_dpad_scroll_speed1 = DPAD_SCROLL_SPEED1_DEFAULT;
double var_dpad_scroll_speed1_threashold = DPAD_SCROLL_THREASHOLD_DEFAULT;
int var_free_ram = 0;
int var_free_linear_ram = 0;
int var_lcd_brightness = 100;
int var_time_to_turn_off_lcd = 150;
int var_num_of_app_start = 0;
int var_system_region = 0;
bool var_is_new3ds;
bool var_core2_available;
bool var_core3_available;
bool var_app_suspended = false;
int var_community_image_size = COMMUNITY_IMAGE_SIZE_DEFAULT;
double var_scroll_speed = 0.5;
double var_battery_voltage = 0;
char var_status[128];
std::string var_clipboard = "";
std::string var_connected_ssid = "";
std::string var_lang = "en";
std::string var_lang_content = "en";
u8 var_model;
C2D_Image var_square_image[1];
C2D_Image var_texture_thumb_up[2];
C2D_Image var_texture_thumb_down[2];
