/*
 * Copyright (C) 2018 Canonical Ltd.
 * Copyright (C) 2019-2020 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Author: Daniel van Vugt <daniel.van.vugt@canonical.com>
 */

#ifndef META_DRM_BUFFER_H
#define META_DRM_BUFFER_H

#include <glib-object.h>
#include <stdint.h>

#define META_TYPE_DRM_BUFFER (meta_drm_buffer_get_type ())
G_DECLARE_DERIVABLE_TYPE (MetaDrmBuffer,
                          meta_drm_buffer,
                          META, DRM_BUFFER,
                          GObject)

uint32_t meta_drm_buffer_get_fb_id (MetaDrmBuffer *buffer);

int meta_drm_buffer_get_width (MetaDrmBuffer *buffer);

int meta_drm_buffer_get_height (MetaDrmBuffer *buffer);

int meta_drm_buffer_get_stride (MetaDrmBuffer *buffer);

uint32_t meta_drm_buffer_get_format (MetaDrmBuffer *buffer);

#endif /* META_DRM_BUFFER_H */
