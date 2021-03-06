/** @file
  HMAC-MD5 Wrapper Implementation which does not provide real capabilities.

Copyright (c) 2012 - 2020, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#include "InternalCryptLib.h"

/**
  Allocates and initializes one HMAC_CTX context for subsequent HMAC-MD5 use.

  Return NULL to indicate this interface is not supported.

  @retval NULL  This interface is not supported.

**/
VOID *
EFIAPI
HmacMd5New (
  VOID
  )
{
  ASSERT (FALSE);
  return NULL;
}

/**
  Release the specified HMAC_CTX context.

  This function will do nothing.

  @param[in]  HmacMd5Ctx  Pointer to the HMAC_CTX context to be released.

**/
VOID
EFIAPI
HmacMd5Free (
  IN  VOID  *HmacMd5Ctx
  )
{
  ASSERT (FALSE);
  return;
}

/**
  Set user-supplied key for subsequent use. It must be done before any
  calling to HmacMd5Update().

  Return FALSE to indicate this interface is not supported.

  @param[out]  HmacMd5Context  Pointer to HMAC-MD5 context.
  @param[in]   Key             Pointer to the user-supplied key.
  @param[in]   KeySize         Key size in bytes.

  @retval FALSE  This interface is not supported.

**/
BOOLEAN
EFIAPI
HmacMd5SetKey (
  OUT  VOID         *HmacMd5Context,
  IN   CONST UINT8  *Key,
  IN   UINTN        KeySize
  )
{
  ASSERT (FALSE);
  return FALSE;
}

/**
  Makes a copy of an existing HMAC-MD5 context.

  Return FALSE to indicate this interface is not supported.

  @param[in]  HmacMd5Context     Pointer to HMAC-MD5 context being copied.
  @param[out] NewHmacMd5Context  Pointer to new HMAC-MD5 context.

  @retval FALSE  This interface is not supported.

**/
BOOLEAN
EFIAPI
HmacMd5Duplicate (
  IN   CONST VOID  *HmacMd5Context,
  OUT  VOID        *NewHmacMd5Context
  )
{
  ASSERT (FALSE);
  return FALSE;
}

/**
  Digests the input data and updates HMAC-MD5 context.

  Return FALSE to indicate this interface is not supported.

  @param[in, out]  HmacMd5Context  Pointer to the HMAC-MD5 context.
  @param[in]       Data            Pointer to the buffer containing the data to be digested.
  @param[in]       DataSize        Size of Data buffer in bytes.

  @retval FALSE  This interface is not supported.

**/
BOOLEAN
EFIAPI
HmacMd5Update (
  IN OUT  VOID        *HmacMd5Context,
  IN      CONST VOID  *Data,
  IN      UINTN       DataSize
  )
{
  ASSERT (FALSE);
  return FALSE;
}

/**
  Completes computation of the HMAC-MD5 digest value.

  Return FALSE to indicate this interface is not supported.

  @param[in, out]  HmacMd5Context  Pointer to the HMAC-MD5 context.
  @param[out]      HmacValue       Pointer to a buffer that receives the HMAC-MD5 digest
                                   value (16 bytes).

  @retval FALSE  This interface is not supported.

**/
BOOLEAN
EFIAPI
HmacMd5Final (
  IN OUT  VOID   *HmacMd5Context,
  OUT     UINT8  *HmacValue
  )
{
  ASSERT (FALSE);
  return FALSE;
}
