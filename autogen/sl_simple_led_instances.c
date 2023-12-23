/***************************************************************************//**
 * @file
 * @brief LED Driver Instances
 *******************************************************************************
 * # License
 * <b>Copyright 2019 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#include "sl_simple_led.h"
#include "em_gpio.h"
#include "sl_simple_led_led0_config.h"
#include "sl_simple_led_led1_config.h"
#include "sl_simple_led_led16_config.h"
#include "sl_simple_led_led2_config.h"
#include "sl_simple_led_led3_config.h"
#include "sl_simple_led_led4_config.h"

sl_simple_led_context_t simple_led0_context = {
  .port = SL_SIMPLE_LED_LED0_PORT,
  .pin = SL_SIMPLE_LED_LED0_PIN,
  .polarity = SL_SIMPLE_LED_LED0_POLARITY,
};

const sl_led_t sl_led_led0 = {
  .context = &simple_led0_context,
  .init = sl_simple_led_init,
  .turn_on = sl_simple_led_turn_on,
  .turn_off = sl_simple_led_turn_off,
  .toggle = sl_simple_led_toggle,
  .get_state = sl_simple_led_get_state,
};
sl_simple_led_context_t simple_led1_context = {
  .port = SL_SIMPLE_LED_LED1_PORT,
  .pin = SL_SIMPLE_LED_LED1_PIN,
  .polarity = SL_SIMPLE_LED_LED1_POLARITY,
};

const sl_led_t sl_led_led1 = {
  .context = &simple_led1_context,
  .init = sl_simple_led_init,
  .turn_on = sl_simple_led_turn_on,
  .turn_off = sl_simple_led_turn_off,
  .toggle = sl_simple_led_toggle,
  .get_state = sl_simple_led_get_state,
};
sl_simple_led_context_t simple_led16_context = {
  .port = SL_SIMPLE_LED_LED16_PORT,
  .pin = SL_SIMPLE_LED_LED16_PIN,
  .polarity = SL_SIMPLE_LED_LED16_POLARITY,
};

const sl_led_t sl_led_led16 = {
  .context = &simple_led16_context,
  .init = sl_simple_led_init,
  .turn_on = sl_simple_led_turn_on,
  .turn_off = sl_simple_led_turn_off,
  .toggle = sl_simple_led_toggle,
  .get_state = sl_simple_led_get_state,
};
sl_simple_led_context_t simple_led2_context = {
  .port = SL_SIMPLE_LED_LED2_PORT,
  .pin = SL_SIMPLE_LED_LED2_PIN,
  .polarity = SL_SIMPLE_LED_LED2_POLARITY,
};

const sl_led_t sl_led_led2 = {
  .context = &simple_led2_context,
  .init = sl_simple_led_init,
  .turn_on = sl_simple_led_turn_on,
  .turn_off = sl_simple_led_turn_off,
  .toggle = sl_simple_led_toggle,
  .get_state = sl_simple_led_get_state,
};
sl_simple_led_context_t simple_led3_context = {
  .port = SL_SIMPLE_LED_LED3_PORT,
  .pin = SL_SIMPLE_LED_LED3_PIN,
  .polarity = SL_SIMPLE_LED_LED3_POLARITY,
};

const sl_led_t sl_led_led3 = {
  .context = &simple_led3_context,
  .init = sl_simple_led_init,
  .turn_on = sl_simple_led_turn_on,
  .turn_off = sl_simple_led_turn_off,
  .toggle = sl_simple_led_toggle,
  .get_state = sl_simple_led_get_state,
};
sl_simple_led_context_t simple_led4_context = {
  .port = SL_SIMPLE_LED_LED4_PORT,
  .pin = SL_SIMPLE_LED_LED4_PIN,
  .polarity = SL_SIMPLE_LED_LED4_POLARITY,
};

const sl_led_t sl_led_led4 = {
  .context = &simple_led4_context,
  .init = sl_simple_led_init,
  .turn_on = sl_simple_led_turn_on,
  .turn_off = sl_simple_led_turn_off,
  .toggle = sl_simple_led_toggle,
  .get_state = sl_simple_led_get_state,
};

const sl_led_t *sl_simple_led_array[] = {
  &sl_led_led0,
  &sl_led_led1,
  &sl_led_led16,
  &sl_led_led2,
//  &sl_led_led3,
//  &sl_led_led4
};

void sl_simple_led_init_instances(void)
{
  sl_led_init(&sl_led_led0);
  sl_led_init(&sl_led_led1);
  sl_led_init(&sl_led_led16);
  sl_led_init(&sl_led_led2);
//  sl_led_init(&sl_led_led3);
//  sl_led_init(&sl_led_led4);
}