#include "sl_event_handler.h"

#include "em_chip.h"
#include "sl_device_init_nvic.h"
#include "sl_device_init_hfrco.h"
#include "sl_device_init_hfxo.h"
#include "sl_device_init_clocks.h"
#include "sl_device_init_emu.h"
#include "pa_conversions_efr32.h"
#include "sl_rail_util_pti.h"
#include "sl_rail_util_rf_path.h"
#include "zigbee_app_framework_common.h"
#include "btl_interface.h"
#include "sl_sleeptimer.h"
#include "app_timer.h"
#include "sl_debug_swo.h"
#include "gpiointerrupt.h"
#include "sl_iostream_debug.h"
#include "sl_iostream_init_usart_instances.h"
#include "hal.h"
#include "sl_mbedtls.h"
#include "nvm3_default.h"
#include "sl_simple_button_instances.h"
#include "sl_simple_led_instances.h"
#include "eeprom.h"
#include "sl_iostream_init_instances.h"
#include "sl_power_manager.h"
#include "sl_rail_util_power_manager_init.h"

void sl_platform_init(void)
{
  CHIP_Init();
  sl_device_init_nvic();
  sl_device_init_hfrco();
  sl_device_init_hfxo();
  sl_device_init_clocks();
  sl_device_init_emu();
  bootloader_init();
  halInit();
  nvm3_initDefault();
  sl_power_manager_init();
}

void sl_driver_init(void)
{
//  sl_debug_swo_init();
  GPIOINT_Init();
  sl_simple_button_init_instances();
  sl_simple_led_init_instances();
  emberAfPluginEepromInit();
}

void sl_service_init(void)
{
  sl_sleeptimer_init();
  sl_mbedtls_init();
  sl_iostream_init_instances();
}

void sl_stack_init(void)
{
  sl_rail_util_pa_init();
  sl_rail_util_pti_init();
  sl_rail_util_rf_path_init();
  sli_zigbee_stack_init_callback();
  sli_zigbee_app_framework_init_callback();
  sli_zigbee_app_framework_sleep_init();
  sl_rail_util_power_manager_init();
}

void sl_internal_app_init(void)
{
}

void sl_platform_process_action(void)
{
}

void sl_service_process_action(void)
{
  sli_app_timer_step();
}

void sl_stack_process_action(void)
{
  sli_zigbee_stack_tick_callback();
  sli_zigbee_app_framework_tick_callback();
}

void sl_internal_app_process_action(void)
{
}

void sl_iostream_init_instances(void)
{
  sl_iostream_debug_init();
  sl_iostream_usart_init_instances();
}

