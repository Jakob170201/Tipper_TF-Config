/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zmk/display/status_screen.h>

#include <logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

LV_IMG_DECLARE(tipperlogo);

lv_style_t global_style;
lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;
    lv_obj_t * tipperlogo_icon;
    tipperlogo_icon = lv_img_create(screen, NULL);
    lv_img_set_src(tipperlogo_icon, &tipperlogo);
    lv_obj_align(tipperlogo_icon, NULL, LV_ALIGN_IN_TOP_MID, 0,0);
    
    return screen;
}
