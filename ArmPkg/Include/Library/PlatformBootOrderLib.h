/** @file
  Platform Boot Order Library header.

  Copyright (c) 2023, Ampere Computing LLC. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef PLATFORM_BOOT_ORDER_LIB_H_
#define PLATFORM_BOOT_ORDER_LIB_H_

/**  This function allows the platform to set the DriverOrder/BootOrder variables.

  The platform can use this function to sort the load options and
  then change the DriverOrder/BootOrder variables based on the sort.

  @retval EFI_SUCCESS  Platform successfully modifies
                       the DriverOrder/BootOrder variables as wanted.
  @retval Others       There are some errors that happen. Check the status code
                       for details.

**/
EFI_STATUS
PlatformUpdateBootOrder (
  VOID
  );

#endif // PLATFORM_BOOT_ORDER_LIB_H_
