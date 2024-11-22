/*
 * LICENSE() macro to save licensing information in compiled objects
 *
 * Copyright 2012-2024 Alexios Zavras (zvr)
 * SPDX-License-Identifier: MIT
 */

#ifndef LICENSE_H
#define LICENSE_H

#define LICENSE(license) \
	static const char license_info_##__COUNTER__[] __attribute__((used)) = \
	"SPDX-License-Identifier: " license;

#endif // LICENSE_H

