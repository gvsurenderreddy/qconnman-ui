/*
 * qconnman - Connman Applet
 * Copyright (C) 2011 O.S. Systems
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "technologyitemwidget.h"

#include <qconnman/technology.h>

#include <QListWidget>
#include <QDebug>

TechnologyItemWidget::TechnologyItemWidget(Technology *technology, QWidget *parent):
    QWidget(parent)
{
    ui.setupUi(this);

    const QString &type = technology->type().toLower();
    if (type == "ethernet")
    {
        ui.icon->setPixmap(QPixmap(":/images/network-wired.png"));
        ui.label->setText(tr("Wired"));
    }
    else if (type == "wifi")
    {
        ui.icon->setPixmap(QPixmap(":/images/network-wireless.png"));
        ui.label->setText(tr("Wireless"));
    }
}
