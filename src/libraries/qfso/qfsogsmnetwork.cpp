/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsogsmnetwork -c QFsoGSMNetwork specs/xml/org.freesmartphone.GSM.Network.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "qfsogsmnetwork.h"

/*
 * Implementation of interface class QFsoGSMNetwork
 */

QFsoGSMNetwork::QFsoGSMNetwork(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
    qRegisterMetaType<QFsoNetworkProvider>("QFsoNetworkProvider");
    qDBusRegisterMetaType<QFsoNetworkProvider>();
    qRegisterMetaType<QFsoNetworkProviderList>("QFsoNetworkProviderList");
    qDBusRegisterMetaType<QFsoNetworkProviderList>();
}

QFsoGSMNetwork::~QFsoGSMNetwork()
{
}
