#include <QString>

/* %1 is a placeholder for palette(highlight) or the equivalent chosen by the user */
static const QString qt_theme_default_stylesheet = QStringLiteral(""
   "QPushButton[flat=\"true\"] {\n"
   "   min-height:20px;\n"
   "   min-width:80px;\n"
   "   padding:1px 3px 1px 3px;\n"
   "   background-color: transparent;\n"
   "   border: 1px solid #ddd;\n"
   "}\n"
   "ThumbnailWidget#thumbnailWidget, ThumbnailLabel#thumbnailGridLabel, QLabel#thumbnailQLabel {\n"
   "   background-color:#d4d4d4;\n"
   "}\n"
   "ThumbnailWidget#thumbnailWidgetSelected {\n"
   "   background-color:#d4d4d4;\n"
   "   border:3px solid %1;\n"
   "}\n"
);

static const QString qt_theme_dark_stylesheet = QStringLiteral(""
   "QWidget {\n"
   "   color:white;\n"
   "   background-color:rgb(53,53,53);\n"
   "   selection-background-color:%1;\n"
   "}\n"
   "QWidget#playlistWidget, QWidget#browserWidget, QWidget#tableWidget, QWidget#logWidget {\n"
   "   background-color:rgb(66,66,66);\n"
   "   border-top:1px solid rgba(175,175,175,50%);\n"
   "   border-left:1px solid rgba(125,125,125,50%);\n"
   "   border-right:1px solid rgba(125,125,125,50%);\n"
   "   border-bottom:1px solid rgba(25,25,25,75%);\n"
   "}\n"
   "QTextEdit, LogTextEdit {\n"
   "   background-color:rgb(25,25,25);\n"
   "}\n"
   "QSpinBox, QCheckBox {\n"
   "   background-color:rgb(25,25,25);\n"
   "}\n"
   "QCheckBox:checked, QCheckBox:unchecked {\n"
   "   background-color:rgb(53,53,53);\n"
   "}\n"
   "QDialog#shaderParamsDialog {\n"
   "   background-color:rgb(25,25,25);\n"
   "}\n"
   "QDialog#shaderParamsDialog QGroupBox, QDialog#shaderParamsDialog QGroupBox QLabel,\n"
   "QDialog#shaderParamsDialog QGroupBox QSlider, QDialog#shaderParamsDialog QGroupBox QCheckBox:checked,\n"
   "QDialog#shaderParamsDialog QGroupBox QCheckBox:unchecked {\n"
   "   background-color:rgb(53,53,53);\n"
   "}\n"
   "QDialog#shaderParamsDialog QGroupBox {\n"
   "   border-top-left-radius: 0px;\n"
   "}\n"
   "QDialog#shaderParamsDialog QGroupBox::title {\n"
   "   margin-left:0px;\n"
   "   min-height:28px;\n"
   "   padding:4px 10px;\n"
   "   background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgb(53,53,53),stop:1 rgba(125,125,125,127));\n"
   "   border:1px solid rgba(25,25,25,75);\n"
   "   border-top:1px solid rgba(175,175,175,50%);\n"
   "   border-bottom: none transparent;\n"
   "}\n"
   "QToolTip {\n"
   "   color:white;\n"
   "   background-color:rgb(53,53,53);\n"
   "   border:1px solid rgb(80,80,80);\n"
   "   border-radius:4px;\n"
   "}\n"
   "QMenuBar {\n"
   "   background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border-bottom:2px solid rgba(25,25,25,75);\n"
   "}\n"
   "QMenuBar::item {\n"
   "   spacing:2px;\n"
   "   padding:3px 4px;\n"
   "   background-color:transparent;\n"
   "}\n"
   "QMenuBar::item:selected {\n"
   "   background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(106,106,106,255),stop:1 rgba(106,106,106,75));\n"
   "   border:1px solid %1;\n"
   "}\n"
   "QMenuBar::item:pressed {\n"
   "   background-color:%1;\n"
   "   border-left:1px solid rgba(25,25,25,127);\n"
   "   border-right:1px solid rgba(25,25,25,127);\n"
   "}\n"
   "QMenu {\n"
   "   background-color:rgb(45,45,45);\n"
   "   border:1px solid palette(shadow);\n"
   "}\n"
   "QMenu::item {\n"
   "   padding:3px 25px 3px 25px;\n"
   "   border:1px solid transparent;\n"
   "}\n"
   "QMenu::item:disabled {\n"
   "   color:rgb(127,127,127);\n"
   "}\n"
   "QMenu::item:selected {\n"
   "   border-color:rgba(200,200,200,127);\n"
   "   background-color:%1;\n"
   "}\n"
   "QMenu::icon:checked {\n"
   "   background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border:1px solid %1;\n"
   "   border-radius:2px;\n"
   "}\n"
   "QMenu::separator {\n"
   "   height:1px;\n"
   "   background-color:rgb(100,100,100);\n"
   "   margin-left:5px;\n"
   "   margin-right:5px;\n"
   "}\n"
   "QMenu::indicator {\n"
   "   width:18px;\n"
   "   height:18px;\n"
   "}\n"
   "QToolBar::top {\n"
   "   background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border-bottom:3px solid qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "}\n"
   "QToolBar::bottom {\n"
   "   background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border-top:3px solid qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "}\n"
   "QToolBar::left {\n"
   "   background-color:qlineargradient(x1:0,y1:0,x2:1,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border-right:3px solid qlineargradient(x1:0,y1:0,x2:1,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "}\n"
   "QToolBar::right {\n"
   "   background-color:qlineargradient(x1:1,y1:0,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border-left:3px solid qlineargradient(x1:1,y1:0,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "}\n"
   "QMainWindow {\n"
   "   background-color:rgb(53,53,53);\n"
   "}\n"
   "QMainWindow::separator {\n"
   "   width:6px;\n"
   "   height:5px;\n"
   "   padding:2px;\n"
   "   background-color:rgba(25,25,25,50%);\n"
   "}\n"
   "QLineEdit {\n"
   "   color:white;\n"
   "   background-color:rgb(25,25,25);\n"
   "}\n"
   "QLineEdit::focus {\n"
   "   border:1px solid %1;\n"
   "   border-radius:3px;\n"
   "   color:white;\n"
   "   background-color:rgb(25,25,25);\n"
   "}\n"
   "QSplitter::handle:horizontal {\n"
   "   width:10px;\n"
   "}\n"
   "QSplitter::handle:vertical {\n"
   "   height:10px;\n"
   "}\n"
   "QMainWindow::separator:hover, QSplitter::handle:hover {\n"
   "}\n"
   "QDockWidget::title {\n"
   "   padding:4px;\n"
   "   background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,175),stop:1 rgba(53,53,53,75));\n"
   "   border:1px solid rgba(25,25,25,75);\n"
   "   border-top:1px solid rgba(175,175,175,50%);\n"
   "   border-bottom:1px solid rgba(25,25,25,127);\n"
   "}\n"
   "QDockWidget::close-button, QDockWidget::float-button {\n"
   "   subcontrol-position:top right;\n"
   "   subcontrol-origin:margin;\n"
   "   position:absolute;\n"
   "   top:3px;\n"
   "   bottom:0px;\n"
   "   width:20px;\n"
   "   height:20px;\n"
   "}\n"
   "QDockWidget::close-button:hover, QDockWidget::float-button:hover {\n"
   "   border:1px solid %1;\n"
   "   border-radius:4px;\n"
   "}\n"
   "QDockWidget::close-button {\n"
   "   right:3px;\n"
   "}\n"
   "QDockWidget::float-button {\n"
   "   right:25px;\n"
   "}\n"
   "QGroupBox {\n"
   "   background-color:rgba(66,66,66,50%);\n"
   "   margin-top:27px;\n"
   "   border:1px solid rgba(25,25,25,127);\n"
   "   border-top-left-radius:4px;\n"
   "   border-top-right-radius:4px;\n"
   "}\n"
   "QGroupBox::title {\n"
   "   subcontrol-origin:margin;\n"
   "   subcontrol-position:left top;\n"
   "   padding:4px 6px;\n"
   "   margin-left:3px;\n"
   "   background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border:1px solid rgba(25,25,25,75);\n"
   "   border-top-left-radius:4px;\n"
   "   border-top-right-radius:4px;\n"
   "}\n"
   "QTabWidget::pane {\n"
   "   background-color:rgba(66,66,66,50%);\n"
   "}\n"
   "QTabWidget::tab-bar {\n"
   "}\n"
   "QTabBar {\n"
   "   background-color:transparent;\n"
   "   qproperty-drawBase:0;\n"
   "   border-bottom:1px solid rgba(25,25,25,50%);\n"
   "}\n"
   "QTabBar::tab {\n"
   "   padding:4px 6px;\n"
   "   background-color:rgba(25,25,25,127);\n"
   "   border:1px solid rgba(25,25,25,75);\n"
   "}\n"
   "QTabBar::tab:selected {\n"
   "   background-color:rgb(66,66,66);\n"
   "   border-bottom-color:rgba(66,66,66,75%);\n"
   "}\n"
   "QTabBar::tab:!selected {\n"
   "   color:rgb(175,175,175);\n"
   "}\n"
   "QComboBox {\n"
   "   min-height:20px;\n"
   "   padding:1px 18px 1px 3px;\n"
   "}\n"
   "QComboBox::focus {\n"
   "   background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgba(255,255,255,50), stop: 1 rgba(100,100,100,25));\n"
   "   border:1px solid %1;\n"
   "   border-radius:4px;\n"
   "}\n"
   "QComboBox::hover {\n"
   "   background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgba(255,255,255,50), stop: 1 rgba(127,127,127,50));\n"
   "   border:1px solid %1;\n"
   "   border-radius:4px;\n"
   "}\n"
   "QComboBox::drop-down {\n"
   "   background-color:transparent;\n"
   "}\n"
   "QComboBox::selected:on, QComboBox::selected:off {\n"
   "   background-color:%1;\n"
   "}\n"
   "QTabBar::tab:hover {\n"
   "   color:white;\n"
   "   background-color:%1;\n"
   "}\n"
   "QComboBox::separator {\n"
   "   background-color:rgb(100,100,100);\n"
   "   height:1px;\n"
   "   margin-left:4px;\n"
   "   margin-right:4px;\n"
   "}\n"
   "QCheckBox::indicator {\n"
   "   width:18px;\n"
   "   height:18px;\n"
   "}\n"
   "QPushButton {\n"
   "   min-height:20px;\n"
   "   min-width:80px;\n"
   "   padding:1px 3px 1px 3px;\n"
   "   outline:none;\n"
   "}\n"
   "QPushButton::focus, QToolButton::focus {\n"
   "   background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgba(255,255,255,50), stop: 1 rgba(100,100,100,25));\n"
   "   border:1px solid %1;\n"
   "   border-radius:4px;\n"
   "}\n"
   "QPushButton::hover, QToolButton::hover {\n"
   "   background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgba(255,255,255,75), stop: 1 rgba(100,100,100,50));\n"
   "   border:1px solid %1;\n"
   "   border-radius:4px;\n"
   "}\n"
   "QPushButton::pressed, QToolButton::pressed {\n"
   "   background-color:transparent;\n"
   "   border:1px solid %1;\n"
   "   border-radius:4px;\n"
   "}\n"
   "QPushButton[flat=\"true\"] {\n"
   "   background-color: transparent;\n"
   "}\n"
   "QRadioButton::indicator {\n"
   "   width:18px;\n"
   "   height:18px;\n"
   "}\n"
   "QListWidget::item:selected, QTreeView::item:selected, QTableView::item:selected {\n"
   "   color:white;\n"
   "   background-color:%1;\n"
   "}\n"
   "QTreeView {\n"
   "   background-color:rgb(25,25,25);\n"
   "   selection-background-color:%1;\n"
   "}\n"
   "QTreeView::branch:selected {\n"
   "   background-color:%1;\n"
   "}\n"
   "QTreeView::item:selected:disabled, QTableView::item:selected:disabled {\n"
   "   background-color:rgb(80,80,80);\n"
   "}\n"
   "QTreeView::branch:open, QTreeView::branch:closed {\n"
   "   background-color:solid;\n"
   "}\n"
   "QTableView, QListWidget {\n"
   "   background-color:rgb(25,25,25);\n"
   "}\n"
   "QTreeView QHeaderView::section, QTableView QHeaderView::section {\n"
   "   /*height:24px;*/\n"
   "   background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "   border-style:none;\n"
   "   border-bottom:1px solid rgb(65,65,65);\n"
   "   padding-left:5px;\n"
   "   padding-right:5px;\n"
   "}\n"
   "QTableWidget {\n"
   "   background-color:rgb(25,25,25);\n"
   "   alternate-background-color:rgb(40,40,40);\n"
   "}\n"
   "QScrollBar:vertical, QScrollBar:horizontal {\n"
   "   background-color:rgb(35,35,35);\n"
   "}\n"
   "QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
   "   background-color:rgb(65,65,65);\n"
   "   border-right:1px solid rgba(175,175,175,50%);\n"
   "   border-top:1px solid rgba(175,175,175,50%);\n"
   "   border-bottom:1px solid rgba(25,25,25,75);\n"
   "   border-radius:2px;\n"
   "}\n"
   "QScrollBar::handle:horizontal:hover, QScrollBar::handle:vertical:hover {\n"
   "   border:1px solid %1;\n"
   "   background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgba(255,255,255,75), stop: 1 rgba(127,127,127,75));\n"
   "}\n"
   "QScrollBar:vertical {\n"
   "   border-top-right-radius:2px;\n"
   "   border-bottom-right-radius:2px;\n"
   "   width:16px;\n"
   "   margin:0px;\n"
   "}\n"
   "QScrollBar::handle:vertical {\n"
   "   min-height:20px;\n"
   "   margin:2px 4px 2px 4px;\n"
   "}\n"
   "QScrollBar::add-line:vertical {\n"
   "   background:none;\n"
   "   height:0px;\n"
   "   subcontrol-position:right;\n"
   "   subcontrol-origin:margin;\n"
   "}\n"
   "QScrollBar::sub-line:vertical {\n"
   "   background:none;\n"
   "   height:0px;\n"
   "   subcontrol-position:left;\n"
   "   subcontrol-origin:margin;\n"
   "}\n"
   "QScrollBar:horizontal {\n"
   "   height:16px;\n"
   "   margin:0px;\n"
   "}\n"
   "QScrollBar::handle:horizontal {\n"
   "   min-width:20px;\n"
   "   margin:4px 2px 4px 2px;\n"
   "}\n"
   "QScrollBar::add-line:horizontal {\n"
   "   background:none;\n"
   "   width:0px;\n"
   "   subcontrol-position:bottom;\n"
   "   subcontrol-origin:margin;\n"
   "}\n"
   "QScrollBar::sub-line:horizontal {\n"
   "   background:none;\n"
   "   width:0px;\n"
   "   subcontrol-position:top;\n"
   "   subcontrol-origin:margin;\n"
   "}\n"
   "QSlider::sub-page {\n"
   "   background:%1;\n"
   "}\n"
   "QSlider::groove:vertical {\n"
   "   width:3px;\n"
   "   background:rgb(25,25,25);\n"
   "}\n"
   "QSlider::handle:vertical {\n"
   "   background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgb(175,175,175), stop: 1 rgb(75,75,75));\n"
   "   border:1px solid rgb(35,35,35);\n"
   "   border-radius:2px;\n"
   "   height:16px;\n"
   "   margin:0 -4px;\n"
   "}\n"
   "QSlider::handle:vertical:hover {\n"
   "   background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgb(200,200,200), stop: 1 rgba(100,100,100));\n"
   "   border:1px solid %1;\n"
   "   border-radius:2px;\n"
   "   height:16px;\n"
   "   margin:0 -4px;\n"
   "}\n"
   "QSlider::groove:horizontal {\n"
   "   height:3px;\n"
   "   background:rgb(25,25,25);\n"
   "}\n"
   "QSlider::handle:horizontal {\n"
   "   background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgb(175,175,175), stop: 1 rgb(75,75,75));\n"
   "   border:1px solid rgb(35,35,35);\n"
   "   border-radius:2px;\n"
   "   width:16px;\n"
   "   margin:-4px 0;\n"
   "}\n"
   "QSlider::handle:horizontal:hover {\n"
   "   background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,stop: 0 rgb(200,200,200), stop: 1 rgba(100,100,100));\n"
   "   border:1px solid %1;\n"
   "   border-radius:2px;\n"
   "   width:16px;\n"
   "   margin:-4px 0;\n"
   "}\n"
   "QStatusBar {\n"
   "   color:white;\n"
   "   background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
   "}\n"
   "QStatusBar QLabel {\n"
   "   background-color:transparent;\n"
   "}\n"
   "QSizeGrip {\n"
   "   background-color:solid;\n"
   "}\n"
   "ThumbnailWidget#thumbnailWidget, ThumbnailLabel#thumbnailGridLabel, QLabel#thumbnailQLabel {\n"
   "   background-color:rgb(40,40,40);\n"
   "}\n"
   "ThumbnailWidget#thumbnailWidgetSelected {\n"
   "   background-color:rgb(40,40,40);\n"
   "   border:3px solid %1;\n"
   "}\n"
   "QScrollArea QWidget {\n"
   "background:rgb(25,25,25);\n"
   "}\n"
);
