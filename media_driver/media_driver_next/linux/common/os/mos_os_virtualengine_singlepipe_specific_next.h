/*
* Copyright (c) 2019, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file     mos_os_virtualengine_scalability_specific.h
//! \brief    defines the MOS interface extension for Linux,  supporting virtual engine single pipe mode.
//! \details  defines all types, macros, and functions required by the MOS interface extension for Linux,  supporting virtual engine single pipe mode.
//!

#ifndef __MOS_OS_VIRTUALENGINE_SINGLEPIPE_SPECIFIC_NEXT_H__
#define __MOS_OS_VIRTUALENGINE_SINGLEPIPE_SPECIFIC_NEXT_H__

#include "mos_os_virtualengine_next.h"
#include "mos_os_virtualengine_singlepipe_next.h"
class MosOsVeSinglePipeSpecific
{
public:
    //!
    //! \brief    initialize VE parameters for single pipe virtual engine interface
    //! \param    [in]  pVEInterface
    //!                virtual engine interface
    //! \param    [in]  pVEInitParms
    //!                pointer to VE init parameter
    //! \return   MOS_STATUS
    //!           MOS_STATUS_SUCCESS if success, else fail reason
    //!
    static MOS_STATUS Mos_Specific_VirtualEngine_SinglePipe_Initialize(
        PMOS_VIRTUALENGINE_INTERFACE     pVEInterface,
        PMOS_VIRTUALENGINE_INIT_PARAMS   pVEInitParms);
};

#endif //__MOS_OS_VIRTUALENGINE_SINGLEPIPE_SPECIFIC_NEXT_H__

