// SPDX-License-Identifier: LGPL-2.1-or-later
/****************************************************************************
 *                                                                          *
 *   Copyright (c) 2024 The FreeCAD Project Association AISBL               *
 *                                                                          *
 *   This file is part of FreeCAD.                                          *
 *                                                                          *
 *   FreeCAD is free software: you can redistribute it and/or modify it     *
 *   under the terms of the GNU Lesser General Public License as            *
 *   published by the Free Software Foundation, either version 2.1 of the   *
 *   License, or (at your option) any later version.                        *
 *                                                                          *
 *   FreeCAD is distributed in the hope that it will be useful, but         *
 *   WITHOUT ANY WARRANTY; without even the implied warranty of             *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU       *
 *   Lesser General Public License for more details.                        *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with FreeCAD. If not, see                                *
 *   <https://www.gnu.org/licenses/>.                                       *
 *                                                                          *
 ***************************************************************************/

#include "PreCompiled.h"

#include <Gui/Application.h>
#include <Gui/Command.h>

#include <3rdParty/GSL/include/gsl/pointers>

#include "Workbench.h"


using namespace std;

DEF_STD_CMD(CmdStart)

CmdStart::CmdStart()
    : Command("Start_Start")
{
    sAppModule = "Start";
    sGroup = QT_TR_NOOP("Start");
    sMenuText = QT_TR_NOOP("Start");
    sToolTipText = QT_TR_NOOP("Displays the Start in an MDI view");
    sWhatsThis = "Start_Start";
    sStatusTip = sToolTipText;
    sPixmap = "StartWorkbench";
}

void CmdStart::activated(int iMsg)
{
    Q_UNUSED(iMsg);
    StartGui::Workbench::loadStart();
}


void CreateStartCommands()
{
    Gui::CommandManager& rcCmdMgr = Gui::Application::Instance->commandManager();
    auto newCommand = gsl::owner<CmdStart*>(new CmdStart);
    rcCmdMgr.addCommand(newCommand);  // Transfer ownership
}
