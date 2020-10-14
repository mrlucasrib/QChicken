# encoding: UTF-8

from objectmaphelper import *

qChickenMain_QChickenMain = {"name": "QChickenMain", "type": "QChickenMain", "visible": 1}
qChickenMain_groupBox_QGroupBox = {"name": "groupBox", "type": "QGroupBox", "visible": 1, "window": qChickenMain_QChickenMain}
groupBox_spinBox_3_QSpinBox = {"container": qChickenMain_groupBox_QGroupBox, "name": "spinBox_3", "type": "QSpinBox", "visible": 1}
groupBox_registerbtn_QPushButton = {"container": qChickenMain_groupBox_QGroupBox, "name": "registerbtn", "type": "QPushButton", "visible": 1}
relatorioWindow_RelatorioWindow = {"name": "RelatorioWindow", "type": "RelatorioWindow", "visible": 1}
groupBox_spinBox_5_QSpinBox = {"container": qChickenMain_groupBox_QGroupBox, "name": "spinBox_5", "type": "QSpinBox", "visible": 1}
relatorioWindow_graphicsView_3_QGraphicsView = {"name": "graphicsView_3", "type": "QGraphicsView", "visible": 1, "window": relatorioWindow_RelatorioWindow}
graphicsView_3_QtCharts_QChartView = {"container": relatorioWindow_graphicsView_3_QGraphicsView, "type": "QtCharts::QChartView", "unnamed": 1, "visible": 1}
o_QtCharts_QChart = {"acceptDrops": "no", "container": graphicsView_3_QtCharts_QChartView, "enabled": "yes", "focusable": "no", "movable": "no", "selectable": "no", "type": "QtCharts::QChart", "visible": "yes"}
o_QtCharts_LegendScroller = {"acceptDrops": "no", "container": o_QtCharts_QChart, "enabled": "yes", "focusable": "no", "movable": "no", "selectable": "no", "type": "QtCharts::LegendScroller", "visible": "yes"}
o_QGraphicsRectItem = {"acceptDrops": "no", "container": o_QtCharts_QChart, "enabled": "yes", "focusable": "no", "lineColor": "#000000", "movable": "no", "selectable": "no", "type": "QGraphicsRectItem", "visible": "yes"}
relatorioWindow_graphicsView_QGraphicsView = {"name": "graphicsView", "type": "QGraphicsView", "visible": 1, "window": relatorioWindow_RelatorioWindow}
graphicsView_QtCharts_QChartView = {"container": relatorioWindow_graphicsView_QGraphicsView, "type": "QtCharts::QChartView", "unnamed": 1, "visible": 1}
o_QtCharts_QChart_2 = {"acceptDrops": "no", "container": graphicsView_QtCharts_QChartView, "enabled": "yes", "focusable": "no", "movable": "no", "selectable": "no", "type": "QtCharts::QChart", "visible": "yes"}
o_QtCharts_PieChartItem = {"acceptDrops": "no", "container": o_QtCharts_QChart_2, "enabled": "yes", "focusable": "no", "movable": "no", "selectable": "yes", "type": "QtCharts::PieChartItem", "visible": "yes"}
groupBox_qt_spinbox_lineedit_QLineEdit = {"container": qChickenMain_groupBox_QGroupBox, "name": "qt_spinbox_lineedit", "type": "QLineEdit", "visible": 1}
groupBox_spinBox_6_QSpinBox = {"container": qChickenMain_groupBox_QGroupBox, "name": "spinBox_6", "type": "QSpinBox", "visible": 1}
groupBox_spinBox_4_QSpinBox = {"container": qChickenMain_groupBox_QGroupBox, "name": "spinBox_4", "type": "QSpinBox", "visible": 1}
groupBox_spinBox_2_QSpinBox = {"container": qChickenMain_groupBox_QGroupBox, "name": "spinBox_2", "type": "QSpinBox", "visible": 1}
groupBox_spinBox_QSpinBox = {"container": qChickenMain_groupBox_QGroupBox, "name": "spinBox", "type": "QSpinBox", "visible": 1}
groupBox_qt_spinbox_lineedit_QLineEdit_2 = {"container": qChickenMain_groupBox_QGroupBox, "name": "qt_spinbox_lineedit", "occurrence": 7, "type": "QLineEdit", "visible": 1}
groupBox_dateEdit_2_QDateEdit = {"container": qChickenMain_groupBox_QGroupBox, "name": "dateEdit_2", "type": "QDateEdit", "visible": 1}
groupBox_qt_spinbox_lineedit_QLineEdit_3 = {"container": qChickenMain_groupBox_QGroupBox, "name": "qt_spinbox_lineedit", "occurrence": 8, "type": "QLineEdit", "visible": 1}
groupBox_dateEdit_QDateEdit = {"container": qChickenMain_groupBox_QGroupBox, "name": "dateEdit", "type": "QDateEdit", "visible": 1}
dados_Inv_lidos_QMessageBox = {"type": "QMessageBox", "unnamed": 1, "visible": 1, "windowTitle": "Dados Inválidos"}
dados_Inv_lidos_qt_msgbox_label_QLabel = {"name": "qt_msgbox_label", "type": "QLabel", "visible": 1, "window": dados_Inv_lidos_QMessageBox}
dados_Inv_lidos_OK_QPushButton = {"text": "OK", "type": "QPushButton", "unnamed": 1, "visible": 1, "window": dados_Inv_lidos_QMessageBox}
groupBox_label_3_QLabel = {"container": qChickenMain_groupBox_QGroupBox, "name": "label_3", "type": "QLabel", "visible": 1}
groupBox_label_26_QLabel = {"container": qChickenMain_groupBox_QGroupBox, "name": "label_26", "type": "QLabel", "visible": 1}
relatorioWindow_centralwidget_QWidget = {"name": "centralwidget", "type": "QWidget", "visible": 1, "window": relatorioWindow_RelatorioWindow}
