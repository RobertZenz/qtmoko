/****************************************************************************
**
** This file is part of the Qt Extended Opensource Package.
**
** Copyright (C) 2012 Radek Polak.
**
** Contact: Qt Extended Information (info@qtextended.org)
**
** This file may be used under the terms of the GNU General Public License
** version 2.0 as published by the Free Software Foundation and appearing
** in the file LICENSE.GPL included in the packaging of this file.
**
** Please review the following information to ensure GNU General Public
** Licensing requirements will be met:
**     http://www.fsf.org/licensing/licenses/info/GPLv2.html.
**
**
****************************************************************************/

#ifndef LLINDICATORS_H
#define LLINDICATORS_H

// Low level device specific indicators. E.g. we can blink with leds on
// incoming call or SMS.

// Called on CallAdded oFono signal
void llIndicatorsVoiceCallAdded();

// Called on CallRemoved oFono signal
void llIndicatorsVoiceCallRemoved();

// Called on OFonoPhoneCall.dial()
void llIndicatorsVoiceCallDial();

// Called on OFonoPhoneCall.hangup()
void llIndicatorsVoiceCallHangup();

// Called on OFonoPhoneCall.accept()
void llIndicatorsVoiceCallAccept();

#endif
