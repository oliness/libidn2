/*
 * version.c - implementation of version checking functions
 * Copyright (C) 2011 Simon Josefsson
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#include <config.h>

#include "libidna.h"

#include <string.h>		/* For strverscmp. */

/**
 * libidna_check_version:
 * @req_version: version string to compare with, or NULL.
 *
 * Check LIBIDNA library version.
 *
 * See %LIBIDNA_VERSION for a suitable @req_version string.
 *
 * Return value: Check that the version of the library is at
 *   minimum the one given as a string in @req_version and return the
 *   actual version string of the library; return NULL if the
 *   condition is not met.  If NULL is passed to this function no
 *   check is done and only the version string is returned.
 **/
const char *
libidna_check_version (const char *req_version)
{
  if (!req_version || strverscmp (req_version, LIBIDNA_VERSION) <= 0)
    return LIBIDNA_VERSION;

  return NULL;
}
