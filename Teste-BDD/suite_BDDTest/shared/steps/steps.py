# -*- coding: utf-8 -*-
import names


@Given("the software is open")
def step(context):
    startApplication("QChickenMain")


@When("the user type the |integer|")
def step(context, numDeOvos):
    mouseClick(waitForObject(names.groupBox_qt_spinbox_lineedit_QLineEdit), 213, 7, Qt.NoModifier, Qt.LeftButton)

    mouseClick(waitForImage("image"))
    spinUp(waitForObject(names.groupBox_spinBox_5_QSpinBox))
    mouseClick(waitForObject(names.groupBox_registerbtn_QPushButton), 177, 7, Qt.ShiftModifier, Qt.LeftButton)

    test.xcompare(waitForObjectExists(names.dados_Inv_lidos_qt_msgbox_label_QLabel).enabled, True)
    clickButton(waitForObject(names.dados_Inv_lidos_OK_QPushButton))


@When("the user type the numDeOvos")
def step(context):
    spinUp(waitForObject(names.groupBox_spinBox_3_QSpinBox))
    spinUp(waitForObject(names.groupBox_spinBox_3_QSpinBox))
    doubleClick(waitForObject(names.groupBox_spinBox_3_QSpinBox), 368, 9, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_spinBox_3_QSpinBox))
    mouseClick(waitForObject(names.groupBox_label_3_QLabel), 489, 8, Qt.ShiftModifier, Qt.LeftButton)


@When("press the button Registrar")
def step(context):
    mouseClick(waitForObject(names.groupBox_registerbtn_QPushButton), 135, 11, Qt.ShiftModifier, Qt.LeftButton)


@Then("the user will be advised  by a pop-up window that there is missing data to be filled")
def step(context):
    snooze(3)
    test.xcompare(waitForObjectExists(names.dados_Inv_lidos_qt_msgbox_label_QLabel).enabled, False)


@When("the user type the qtdeFrangs")
def step(context):
    spinUp(waitForObject(names.groupBox_spinBox_5_QSpinBox))
    spinUp(waitForObject(names.groupBox_spinBox_5_QSpinBox))
    mouseClick(waitForObject(names.groupBox_label_3_QLabel), 490, 6, Qt.ShiftModifier, Qt.LeftButton)


@When("type the valFrango")
def step(context):
    spinUp(waitForObject(names.groupBox_spinBox_6_QSpinBox))
    spinUp(waitForObject(names.groupBox_spinBox_6_QSpinBox))
    doubleClick(waitForObject(names.groupBox_spinBox_6_QSpinBox), 368, 9, Qt.NoModifier, Qt.LeftButton)


@When("type the qtdeOvos")
def step(context):
    spinUp(waitForObject(names.groupBox_spinBox_4_QSpinBox))
    doubleClick(waitForObject(names.groupBox_spinBox_4_QSpinBox), 372, 10, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_spinBox_4_QSpinBox))


@When("type the valOvos")
def step(context):
    sendEvent("QMoveEvent", waitForObject(names.qChickenMain_QChickenMain), 18, 37, 578, 52)
    spinUp(waitForObject(names.groupBox_spinBox_3_QSpinBox))
    doubleClick(waitForObject(names.groupBox_spinBox_3_QSpinBox), 365, 6, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_spinBox_3_QSpinBox))
    spinUp(waitForObject(names.groupBox_spinBox_3_QSpinBox))


@When("type the qtdeRacao")
def step(context):
    spinUp(waitForObject(names.groupBox_spinBox_2_QSpinBox))
    spinUp(waitForObject(names.groupBox_spinBox_2_QSpinBox))


@When("type the valRacao")
def step(context):
    spinUp(waitForObject(names.groupBox_spinBox_QSpinBox))
    doubleClick(waitForObject(names.groupBox_spinBox_QSpinBox), 371, 8, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_spinBox_QSpinBox))
    doubleClick(waitForObject(names.groupBox_spinBox_QSpinBox), 371, 8, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_spinBox_QSpinBox))


@When("type inicio")
def step(context):
    mouseClick(waitForObject(names.groupBox_qt_spinbox_lineedit_QLineEdit_2), 55, 9, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_dateEdit_2_QDateEdit))
    doubleClick(waitForObject(names.groupBox_dateEdit_2_QDateEdit), 237, 6, Qt.ControlModifier, Qt.LeftButton)


@When("type the final")
def step(context):
    mouseClick(waitForObject(names.groupBox_qt_spinbox_lineedit_QLineEdit_3), 79, 16, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_dateEdit_QDateEdit))
    doubleClick(waitForObject(names.groupBox_dateEdit_QDateEdit), 237, 10, Qt.ControlModifier, Qt.LeftButton)
    mouseClick(waitForObject(names.groupBox_qt_spinbox_lineedit_QLineEdit_3), 30, 14, Qt.NoModifier, Qt.LeftButton)
    spinUp(waitForObject(names.groupBox_dateEdit_QDateEdit))


@When("press the button Registry")
def step(context):
    clickButton(waitForObject(names.groupBox_registerbtn_QPushButton))
    sendEvent("QMoveEvent", waitForObject(names.relatorioWindow_RelatorioWindow), 50, 78, 699, 618)
    snooze(3)

@Then("the user must be redirected to the dashboard view")
def step(context):
    test.compare(waitForObjectExists(names.relatorioWindow_centralwidget_QWidget).enabled, True)
