/*
 * Copyright (C) 2014 Martin Willi
 * Copyright (C) 2014 revosec AG
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup cng cng
 * @ingroup plugins
 *
 * @defgroup cng_plugin cng_plugin
 * @{ @ingroup cng
 */

#ifndef CNG_PLUGIN_H_
#define CNG_PLUGIN_H_

#include <plugins/plugin.h>

typedef struct cng_plugin_t cng_plugin_t;

/**
 * Plugin wrapping Windows Cryptography API: Next Generation
 */
struct cng_plugin_t {

	/**
	 * Implements plugin interface.
	 */
	plugin_t plugin;
};

#endif /** CNG_PLUGIN_H_ @}*/
