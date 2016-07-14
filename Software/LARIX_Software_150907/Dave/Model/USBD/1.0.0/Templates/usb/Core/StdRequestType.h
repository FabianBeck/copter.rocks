/*
  Copyright 2013  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaims all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/
/*******************************************************************************
 Copyright (c) 2014, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without**
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4000 Series                                         **
**                                                                            **
** COMPILER : Compiler Independent                                            **
**                                                                            **
** AUTHOR : App Developer                                                     **
**                                                                            **
** MAY BE CHANGED BY USER [yes/no]: No                                        **
**                                                                            **
** MODIFICATION DATE : Feb 21, 2014     		                              **
**                                                                            **
*******************************************************************************/

/** \file
 *  \brief USB control endpoint request definitions.
 *  \copydetails Group_StdRequest
 *
 */

/** \ingroup Group_USB
 *  \defgroup Group_StdRequest Standard USB Requests
 *  \brief USB control endpoint request definitions.
 *
 *  This module contains definitions for the various control request parameters,
 *   so that the request details (such as data direction, request recipient,
 *   etc.) can be extracted via masking.
 *
 *  @{
 */

#ifndef __STDREQTYPE_H__
#define __STDREQTYPE_H__

	/* Includes: */
		#include "../Common/Common.h" /* IFX */
		#include "USBMode.h"

	/* Enable C linkage for C++ Compilers: */
		#if defined(__cplusplus)
			extern "C" {
		#endif


	/* Public Interface - May be used in end-application: */
		/* Macros: */
			/** Mask for the request type parameter, to indicate the direction
			 * of the request data (Host to Device or Device to Host). The
			 * result of this mask should then be compared to the request
			 * direction masks.
			 *
			 *  \see \c REQDIR_* macros for masks indicating the request data
			 *  direction.
			 */
			#define CONTROL_REQTYPE_DIRECTION  0x80

			/** Mask for the request type parameter, to indicate the type of
			 * request (Device, Class or Vendor Specific). The result of this
			 * mask should then be compared to the request type masks.
			 *
			 *  \see \c REQTYPE_* macros for masks indicating the request type.
			 */
			#define CONTROL_REQTYPE_TYPE       0x60

			/** Mask for the request type parameter, to indicate the recipient
			 * of the request (Device, Interface  Endpoint or Other). The result
			 *  of this mask should then be compared to the request recipient
			 *  masks.
			 *
			 *  \see \c REQREC_* macros for masks indicating the request
			 *  recipient.
			 */
			#define CONTROL_REQTYPE_RECIPIENT  0x1F

			/** \name Control Request Data Direction Masks */
			//@{
			/** Request data direction mask, indicating that the request data
			 * will flow from host to device.
			 *
			 *  \see \ref CONTROL_REQTYPE_DIRECTION macro.
			 */
			#define REQDIR_HOSTTODEVICE        (0 << 7)

			/** Request data direction mask, indicating that the request data
			 * will flow from device to host.
			 *
			 *  \see \ref CONTROL_REQTYPE_DIRECTION macro.
			 */
			#define REQDIR_DEVICETOHOST        (1 << 7)
			//@}

			/** \name Control Request Type Masks */
			//@{
			/** Request type mask, indicating that the request is a standard
			 * request.
			 *
			 *  \see \ref CONTROL_REQTYPE_TYPE macro.
			 */
			#define REQTYPE_STANDARD           (0 << 5)

			/** Request type mask, indicating that the request is a class-
			 * specific request.
			 *
			 *  \see \ref CONTROL_REQTYPE_TYPE macro.
			 */
			#define REQTYPE_CLASS              (1 << 5)

			/** Request type mask, indicating that the request is a vendor
			 * specific request.
			 *
			 *  \see \ref CONTROL_REQTYPE_TYPE macro.
			 */
			#define REQTYPE_VENDOR             (2 << 5)
			//@}

			/*Control request recipient mask*/
			#define REQ_RECIPIENT_MASK			(3U)

			/** \name Control Request Recipient Masks */
			//@{
			/** Request recipient mask, indicating that the request is to be
			 * issued to the device as a whole.
			 *
			 *  \see \ref CONTROL_REQTYPE_RECIPIENT macro.
			 */
			#define REQREC_DEVICE              (0 << 0)

			/** Request recipient mask, indicating that the request is to be
			 * issued to an interface in the
			 *  currently selected configuration.
			 *
			 *  \see \ref CONTROL_REQTYPE_RECIPIENT macro.
			 */
			#define REQREC_INTERFACE           (1 << 0)

			/** Request recipient mask, indicating that the request is to be
			 * issued to an endpoint in the
			 *  currently selected configuration.
			 *
			 *  \see \ref CONTROL_REQTYPE_RECIPIENT macro.
			 */
			#define REQREC_ENDPOINT            (2 << 0)

			/** Request recipient mask, indicating that the request is to be
			 * issued to an unspecified element
			 *  in the currently selected configuration.
			 *
			 *  \see \ref CONTROL_REQTYPE_RECIPIENT macro.
			 */
			#define REQREC_OTHER               (3 << 0)
			//@}

		/* Type Defines: */
			/** \brief Standard USB Control Request
			 *
			 *  Type define for a standard USB control request.
			 *
			 *  \see The USB 2.0 specification for more information on standard
			 *  control requests.
			 */
			IAR_ATTR_PACKED struct TASKING_ATTR_PACKED USB_Request_Header
			{
				 /**< Type of the request. */
				uint8_t  bmRequestType;

				/**< Request command code. */
				uint8_t  bRequest;

				/**< wValue parameter of the request. */
				uint16_t wValue;

				/**< wIndex parameter of the request. */
				uint16_t wIndex;

				/**< Length of the data to transfer in bytes. */
				uint16_t wLength;
			}ATTR_PACKED;
			typedef struct USB_Request_Header USB_Request_Header_t;

		/* Enums: */
			/** Enumeration for the various standard request commands. These
			 * commands are applicable when the request type is
			 * \ref REQTYPE_STANDARD (with the exception of
			 * \ref REQ_GetDescriptor, which is always handled regardless of the
			 *  request type value).\see Chapter 9 of the USB 2.0 Specification.
			 */
			enum USB_Control_Request_t
			{
				/**< Implemented in the library for device and endpoint
				 * recipients. Passed to the user application for other
				 * recipients via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_GetStatus           = 0,

				/**< Implemented in the library for device and endpoint
				 * recipients. Passed to the user application for other
				 * recipients via the\ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_ClearFeature        = 1,

				/**< Implemented in the library for device and endpoint
				 * recipients. Passed to the user application for other
				 * recipients via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_SetFeature          = 3,

				/**< Implemented in the library for the device recipient.
				 * Passed to the user application for other recipients via the
				 * \ref EVENT_USB_Device_ControlRequest() event when received in
				 *  device mode. */
				REQ_SetAddress          = 5,

				/**< Implemented in the library for device and interface
				 * recipients. Passed to the user application for other
				 * recipients via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_GetDescriptor       = 6,

				/**< Not implemented in the library, passed to the user
				 * application via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_SetDescriptor       = 7,

				/**< Implemented in the library for the device recipient. Passed
				 *  to the user application for other recipients via the
				 *  \ref EVENT_USB_Device_ControlRequest() event when received
				 *  in device mode. */
				REQ_GetConfiguration    = 8,

				/**< Implemented in the library for the device recipient.
				 * Passed to the user application for other recipients via the
				 * \ref EVENT_USB_Device_ControlRequest() event when received in
				 *  device mode. */
				REQ_SetConfiguration    = 9,

				/**< Not implemented in the library, passed to the user
				 * application via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_GetInterface        = 10,

				/**< Not implemented in the library, passed to the user
				 * application via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in  device mode. */
				REQ_SetInterface        = 11,

				/**< Not implemented in the library, passed to the user
				 * application via the \ref EVENT_USB_Device_ControlRequest()
				 * event when received in device mode. */
				REQ_SynchFrame          = 12,
			};

			/** Feature Selector values for Set Feature and Clear Feature
			 * standard control requests directed to the device, interface
			 *  and endpoint recipients.
			 */
			enum USB_Feature_Selectors_t
			{
				/**< Feature selector for Clear Feature or Set Feature commands.
				 *  When used in a Set Feature or Clear Feature request this
				 *  indicates that an endpoint (whose address is given else
				 *  where in the request) should have its stall condition
				 *  changed.*/
				FEATURE_SEL_EndpointHalt       = 0x00,

				/**< Feature selector for Device level Remote Wakeup enable set
				 * or clear.This feature can be controlled by the host on
				 * devices which indicate remote wake up support in their
				 * descriptors to selectively disable or enable remote wake
				 * up.*/
				FEATURE_SEL_DeviceRemoteWakeup = 0x01,

				/**< Feature selector for Test Mode features, used to test the
				 * USB controller to check for incorrect operation.*/
				FEATURE_SEL_TestMode           = 0x02,
			};

	/* Private Interface - For use in library only: */
		#if !defined(__DOXYGEN__)
			/* Macros: */
				#define FEATURE_SELFPOWERED_ENABLED     (1 << 0)
				#define FEATURE_REMOTE_WAKEUP_ENABLED   (1 << 1)
		#endif

	/* Disable C linkage for C++ Compilers: */
		#if defined(__cplusplus)
			}
		#endif

#endif

/** @} */

