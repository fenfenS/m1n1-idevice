//
// Project: KTRW
// Author:  Brandon Azad <bazad@google.com>
//
// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef SYNOPSYS_OTG_REGS__H_
#define SYNOPSYS_OTG_REGS__H_

#ifndef SYNOPSYS_OTG_REGISTER
#define SYNOPSYS_OTG_REGISTER(_x) (_x)
#endif

#define DWC2_DSTS_CONNECTSPD 0x6
#define DWC2_DSTS_HIGHSPEED  0x0

#define DWC2_GOTGCTL   (SYNOPSYS_OTG_REGISTER(0x000))
#define DWC2_GOTGINT   (SYNOPSYS_OTG_REGISTER(0x004))
#define DWC2_GAHBCFG   (SYNOPSYS_OTG_REGISTER(0x008))
#define DWC2_GUSBCFG   (SYNOPSYS_OTG_REGISTER(0x00c))
#define DWC2_GRSTCTL   (SYNOPSYS_OTG_REGISTER(0x010))
#define DWC2_GINTSTS   (SYNOPSYS_OTG_REGISTER(0x014))
    #define DWC2_GINTSTS_GOUTNakEff BIT(7)
    #define DWC2_GINTSTS_USBSuspend BIT(11)
    #define DWC2_GINTSTS_USBRst BIT(12)
    #define DWC2_GINTSTS_ENUMDone BIT(13)
    #define DWC2_GINTSTS_IEPInt BIT(18)
    #define DWC2_GINTSTS_OEPInt BIT(19)
#define DWC2_GINTMSK   (SYNOPSYS_OTG_REGISTER(0x018))
    #define DWC2_GINTMSK_IEPIntMsk BIT(18)
    #define DWC2_GINTMSK_OEPIntMsk BIT(19)
#define DWC2_GRXSTSR   (SYNOPSYS_OTG_REGISTER(0x01c))
#define DWC2_GRXSTSP   (SYNOPSYS_OTG_REGISTER(0x020))
#define DWC2_GRXFSIZ   (SYNOPSYS_OTG_REGISTER(0x024))
#define DWC2_GNPTXFSIZ (SYNOPSYS_OTG_REGISTER(0x028))
#define DWC2_GNPTXSTS  (SYNOPSYS_OTG_REGISTER(0x02c))
#define DWC2_GI2CCTL   (SYNOPSYS_OTG_REGISTER(0x030))
#define DWC2_GPVNDCTL  (SYNOPSYS_OTG_REGISTER(0x034))
#define DWC2_GGPIO     (SYNOPSYS_OTG_REGISTER(0x038))
#define DWC2_GUID      (SYNOPSYS_OTG_REGISTER(0x03c))
#define DWC2_GSNPSID   (SYNOPSYS_OTG_REGISTER(0x040))
#define DWC2_GHWCFG1   (SYNOPSYS_OTG_REGISTER(0x044))
#define DWC2_GHWCFG2   (SYNOPSYS_OTG_REGISTER(0x048))
#define DWC2_GHWCFG3   (SYNOPSYS_OTG_REGISTER(0x04c))
#define DWC2_GHWCFG4   (SYNOPSYS_OTG_REGISTER(0x050))
#define DWC2_GLPMCFG   (SYNOPSYS_OTG_REGISTER(0x054))
#define DWC2_GPWRDN    (SYNOPSYS_OTG_REGISTER(0x058))
#define DWC2_GDFIFOCFG (SYNOPSYS_OTG_REGISTER(0x05c))
#define DWC2_ADPCTL    (SYNOPSYS_OTG_REGISTER(0x060))

#define DWC2_HPTXFSIZ   (SYNOPSYS_OTG_REGISTER(0x100))
#define DWC2_DTXFSIZ(n) (SYNOPSYS_OTG_REGISTER(0x104 + 0x4 * (n - 1)))

#define DWC2_HPTXSIZ (SYNOPSYS_OTG_REGISTER(0x400))

#define DWC2_HPRT0 (SYNOPSYS_OTG_REGISTER(0x440))

#define DWC2_DCFG     (SYNOPSYS_OTG_REGISTER(0x800))
#define DWC2_DCTL     (SYNOPSYS_OTG_REGISTER(0x804))
    #define DWC2_DCTL_SGOUTNak BIT(9)
    #define DWC2_DCTL_CGOUTNak BIT(10)
#define DWC2_DSTS     (SYNOPSYS_OTG_REGISTER(0x808))
#define DWC2_DIEPMSK  (SYNOPSYS_OTG_REGISTER(0x810))
    #define DWC2_DIEPMSK_XferComplMsk BIT(0)
    #define DWC2_DIEPMSK_AHBErrMsk BIT(2)
    #define DWC2_DIEPMSK_TimeOUTMsk BIT(3)
#define DWC2_DOEPMSK  (SYNOPSYS_OTG_REGISTER(0x814))
    #define DWC2_DOEPMSK_XferComplMsk BIT(0)
    #define DWC2_DOEPMSK_AHBErrMsk BIT(2)
    #define DWC2_DOEPMSK_SetUPMsk BIT(3)
#define DWC2_DAINT    (SYNOPSYS_OTG_REGISTER(0x818))
#define DWC2_DAINTMSK (SYNOPSYS_OTG_REGISTER(0x81c))
    #define DWC2_DXEPCTLi_EnableEP BIT(31)
    #define DWC2_DXEPCTLi_DisableEP BIT(30)
    #define DWC2_DXEPCTLi_SetD0Pid BIT(28)
    #define DWC2_DXEPCTL_SetNAK BIT(27)
    #define DWC2_DXEPCTL_ClearNAK BIT(26)
    #define DWC2_DXEPCTL_Stall BIT(21)
    #define DWC2_DXEPCTL_ActivateEP BIT(15)
#define DWC2_DIEPCTL(ep)  (SYNOPSYS_OTG_REGISTER(0x900 + 0x20 * ep))
#define DWC2_DIEPINT(ep)  (SYNOPSYS_OTG_REGISTER(0x908 + 0x20 * ep))
    #define DWC2_DIEPINT_XferCompl BIT(0)
    #define DWC2_DIEPINT_EPDisabled BIT(1)
    #define DWC2_DIEPINT_AHBErr BIT(2)
    #define DWC2_DIEPINT_TimeOUT BIT(3)
    #define DWC2_DIEPINT_InTokenTXFifoEmpty BIT(4)
#define DWC2_DIEPTSIZ(ep) (SYNOPSYS_OTG_REGISTER(0x910 + 0x20 * ep))
#define DWC2_DIEPDMA(ep)  (SYNOPSYS_OTG_REGISTER(0x914 + 0x20 * ep))
#define DWC2_DTXFSTS(ep)  (SYNOPSYS_OTG_REGISTER(0x918 + 0x20 * ep))
#define DWC2_DIEPDMAB(ep) (SYNOPSYS_OTG_REGISTER(0x91c + 0x20 * ep))

#define DWC2_DOEPCTL(ep)  (SYNOPSYS_OTG_REGISTER(0xb00 + 0x20 * ep))
#define DWC2_DOEPINT(ep)  (SYNOPSYS_OTG_REGISTER(0xb08 + 0x20 * ep))
    #define DWC2_DOEPINT_XFER_COMPL BIT(0)
    #define DWC2_DOEPINT_EPDisabled BIT(1)
    #define DWC2_DOEPINT_AHBErr BIT(2)
    #define DWC2_DOEPINT_SETUP BIT(3)
    #define DWC2_DOEPINT_STS_PHASE_RCVD BIT(5)
    #define DWC2_DOEPINT_STUP_PKT_RCVD BIT(15)
#define DWC2_DOEPTSIZ(ep) (SYNOPSYS_OTG_REGISTER(0xb10 + 0x20 * ep))
#define DWC2_DOEPDMA(ep)  (SYNOPSYS_OTG_REGISTER(0xb14 + 0x20 * ep))
#define DWC2_DOEPDMAB(ep) (SYNOPSYS_OTG_REGISTER(0xb1c + 0x20 * ep))

#define DWC2_EP_TYPE_CONTROL 0
#define DWC2_EP_TYPE_ISOC    1
#define DWC2_EP_TYPE_BULK    2
#define DWC2_EP_TYPE_INTR    3
#endif
