/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a dbuscalendar_adaptor -c CalendarAdaptor com.deepin.Calendar.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dbuscalendar_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QWidget>
#include "calendarmainwindow.h"
#include "scheduledatamanage.h"
/*
 * Implementation of adaptor class CalendarAdaptor
 */

CalendarAdaptor::CalendarAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CalendarAdaptor::~CalendarAdaptor()
{
    // destructor
}

void CalendarAdaptor::ActiveWindow()
{
    // handle method call com.deepin.Calendar.RaiseWindow
    //QWidget *pp = qobject_cast<QWidget *>(parent());
    // pp->activateWindow();
    //pp->raise();
    QMetaObject::invokeMethod(parent(), "ActiveWindow");
}

void CalendarAdaptor::RaiseWindow()
{
    QWidget *pp = qobject_cast<QWidget *>(parent());
    pp->activateWindow();
    pp->raise();
    //QMetaObject::invokeMethod(parent(), "RaiseWindow");
}

void CalendarAdaptor::OpenSchedule(QString job)
{
    QMetaObject::invokeMethod(parent(), "OpenSchedule", Q_ARG(QString, job));
}



