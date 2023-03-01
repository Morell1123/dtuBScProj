/********************************************************************************
** Form generated from reading UI file 'pdb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PDB_H
#define UI_PDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PDB
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonViewPDB3D;
    QTextEdit *textEditFasta;
    QLabel *label_4;
    QPushButton *pushButtonDownloadPDB;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditPDB_ID;
    QLineEdit *lineEditPDB_filename;
    QLabel *label_7;
    QLineEdit *lineEditAtom;
    QLineEdit *lineEditChainsOfInterest;
    QCheckBox *checkBoxAllowJumps;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBoxLatticeDistance;
    QDoubleSpinBox *doubleSpinBoxAverageDistancePDB;
    QLabel *label_13;
    QLabel *label_14;
    QCheckBox *checkBoxDiscretizeSideChains;
    QTextEdit *textEditDiscretizedPDB;
    QLabel *label_15;
    QComboBox *comboBoxListChains;
    QLabel *label_16;
    QLineEdit *lineEditFileMergedChains;
    QPushButton *pushButtonMergeChains;
    QLineEdit *lineEditWorkingDirectory;
    QLabel *label_17;
    QLineEdit *lineEditFileOutputLatfit;
    QPushButton *pushButtonDiscretize;
    QPushButton *pushButtonViewDiscretized;
    QPushButton *pushButtonViewReceptorStructures;
    QTextEdit *textEditMultiChainStructure;
    QPushButton *pushButtonConvertLattice;
    QLabel *label_19;
    QLineEdit *lineEditFileConvertedLattice;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_20;
    QFrame *line_3;
    QCheckBox *checkBoxRandomlyPicked;
    QLabel *label_21;
    QSpinBox *spinBoxNumberReceptorsToShow;
    QLabel *label_22;
    QFrame *line_4;
    QLabel *label_23;
    QLabel *label_24;
    QSpinBox *spinBoxSizeReceptors;
    QSpinBox *spinBoxMinInteract;
    QPushButton *pushButtonView3DLatfitOutput;
    QPushButton *pushButtonIterate;
    QCheckBox *checkBoxDeInsert;
    QSpinBox *spinBoxnKeep;
    QLabel *label_11;

    void setupUi(QWidget *PDB)
    {
        if (PDB->objectName().isEmpty())
            PDB->setObjectName(QString::fromUtf8("PDB"));
        PDB->resize(977, 613);
        label = new QLabel(PDB);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 47, 13));
        label_2 = new QLabel(PDB);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 30, 21, 20));
        label_3 = new QLabel(PDB);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 20, 47, 13));
        pushButtonViewPDB3D = new QPushButton(PDB);
        pushButtonViewPDB3D->setObjectName(QString::fromUtf8("pushButtonViewPDB3D"));
        pushButtonViewPDB3D->setGeometry(QRect(30, 80, 111, 23));
        textEditFasta = new QTextEdit(PDB);
        textEditFasta->setObjectName(QString::fromUtf8("textEditFasta"));
        textEditFasta->setGeometry(QRect(640, 40, 321, 261));
        label_4 = new QLabel(PDB);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(620, 20, 47, 13));
        pushButtonDownloadPDB = new QPushButton(PDB);
        pushButtonDownloadPDB->setObjectName(QString::fromUtf8("pushButtonDownloadPDB"));
        pushButtonDownloadPDB->setGeometry(QRect(120, 50, 21, 23));
        label_5 = new QLabel(PDB);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 110, 51, 16));
        label_6 = new QLabel(PDB);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 220, 121, 16));
        lineEditPDB_ID = new QLineEdit(PDB);
        lineEditPDB_ID->setObjectName(QString::fromUtf8("lineEditPDB_ID"));
        lineEditPDB_ID->setGeometry(QRect(20, 40, 81, 20));
        lineEditPDB_filename = new QLineEdit(PDB);
        lineEditPDB_filename->setObjectName(QString::fromUtf8("lineEditPDB_filename"));
        lineEditPDB_filename->setGeometry(QRect(160, 40, 181, 20));
        label_7 = new QLabel(PDB);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 130, 101, 16));
        lineEditAtom = new QLineEdit(PDB);
        lineEditAtom->setObjectName(QString::fromUtf8("lineEditAtom"));
        lineEditAtom->setGeometry(QRect(180, 220, 81, 20));
        lineEditChainsOfInterest = new QLineEdit(PDB);
        lineEditChainsOfInterest->setObjectName(QString::fromUtf8("lineEditChainsOfInterest"));
        lineEditChainsOfInterest->setGeometry(QRect(180, 130, 81, 20));
        checkBoxAllowJumps = new QCheckBox(PDB);
        checkBoxAllowJumps->setObjectName(QString::fromUtf8("checkBoxAllowJumps"));
        checkBoxAllowJumps->setGeometry(QRect(180, 250, 70, 17));
        label_8 = new QLabel(PDB);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 250, 101, 16));
        label_9 = new QLabel(PDB);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 280, 101, 16));
        label_10 = new QLabel(PDB);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(180, 280, 101, 16));
        label_12 = new QLabel(PDB);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 310, 101, 16));
        doubleSpinBoxLatticeDistance = new QDoubleSpinBox(PDB);
        doubleSpinBoxLatticeDistance->setObjectName(QString::fromUtf8("doubleSpinBoxLatticeDistance"));
        doubleSpinBoxLatticeDistance->setGeometry(QRect(180, 310, 81, 22));
        doubleSpinBoxAverageDistancePDB = new QDoubleSpinBox(PDB);
        doubleSpinBoxAverageDistancePDB->setObjectName(QString::fromUtf8("doubleSpinBoxAverageDistancePDB"));
        doubleSpinBoxAverageDistancePDB->setGeometry(QRect(300, 310, 81, 22));
        label_13 = new QLabel(PDB);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(300, 290, 101, 16));
        label_14 = new QLabel(PDB);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 340, 151, 16));
        checkBoxDiscretizeSideChains = new QCheckBox(PDB);
        checkBoxDiscretizeSideChains->setObjectName(QString::fromUtf8("checkBoxDiscretizeSideChains"));
        checkBoxDiscretizeSideChains->setGeometry(QRect(180, 340, 70, 17));
        textEditDiscretizedPDB = new QTextEdit(PDB);
        textEditDiscretizedPDB->setObjectName(QString::fromUtf8("textEditDiscretizedPDB"));
        textEditDiscretizedPDB->setGeometry(QRect(640, 330, 321, 261));
        label_15 = new QLabel(PDB);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(620, 310, 211, 16));
        comboBoxListChains = new QComboBox(PDB);
        comboBoxListChains->setObjectName(QString::fromUtf8("comboBoxListChains"));
        comboBoxListChains->setGeometry(QRect(300, 130, 201, 22));
        label_16 = new QLabel(PDB);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(300, 110, 161, 16));
        lineEditFileMergedChains = new QLineEdit(PDB);
        lineEditFileMergedChains->setObjectName(QString::fromUtf8("lineEditFileMergedChains"));
        lineEditFileMergedChains->setGeometry(QRect(180, 160, 321, 20));
        pushButtonMergeChains = new QPushButton(PDB);
        pushButtonMergeChains->setObjectName(QString::fromUtf8("pushButtonMergeChains"));
        pushButtonMergeChains->setGeometry(QRect(30, 160, 141, 23));
        lineEditWorkingDirectory = new QLineEdit(PDB);
        lineEditWorkingDirectory->setObjectName(QString::fromUtf8("lineEditWorkingDirectory"));
        lineEditWorkingDirectory->setGeometry(QRect(420, 40, 181, 20));
        label_17 = new QLabel(PDB);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(400, 20, 141, 16));
        lineEditFileOutputLatfit = new QLineEdit(PDB);
        lineEditFileOutputLatfit->setObjectName(QString::fromUtf8("lineEditFileOutputLatfit"));
        lineEditFileOutputLatfit->setGeometry(QRect(210, 380, 291, 20));
        pushButtonDiscretize = new QPushButton(PDB);
        pushButtonDiscretize->setObjectName(QString::fromUtf8("pushButtonDiscretize"));
        pushButtonDiscretize->setGeometry(QRect(30, 380, 171, 23));
        pushButtonViewDiscretized = new QPushButton(PDB);
        pushButtonViewDiscretized->setObjectName(QString::fromUtf8("pushButtonViewDiscretized"));
        pushButtonViewDiscretized->setGeometry(QRect(70, 440, 181, 23));
        pushButtonViewReceptorStructures = new QPushButton(PDB);
        pushButtonViewReceptorStructures->setObjectName(QString::fromUtf8("pushButtonViewReceptorStructures"));
        pushButtonViewReceptorStructures->setGeometry(QRect(70, 470, 181, 23));
        textEditMultiChainStructure = new QTextEdit(PDB);
        textEditMultiChainStructure->setObjectName(QString::fromUtf8("textEditMultiChainStructure"));
        textEditMultiChainStructure->setGeometry(QRect(280, 460, 341, 131));
        pushButtonConvertLattice = new QPushButton(PDB);
        pushButtonConvertLattice->setObjectName(QString::fromUtf8("pushButtonConvertLattice"));
        pushButtonConvertLattice->setGeometry(QRect(30, 410, 171, 23));
        label_19 = new QLabel(PDB);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(280, 440, 211, 16));
        lineEditFileConvertedLattice = new QLineEdit(PDB);
        lineEditFileConvertedLattice->setObjectName(QString::fromUtf8("lineEditFileConvertedLattice"));
        lineEditFileConvertedLattice->setGeometry(QRect(210, 410, 291, 20));
        line = new QFrame(PDB);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(500, 380, 141, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(PDB);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 130, 20, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(PDB);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 200, 51, 16));
        line_3 = new QFrame(PDB);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 220, 21, 181));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        checkBoxRandomlyPicked = new QCheckBox(PDB);
        checkBoxRandomlyPicked->setObjectName(QString::fromUtf8("checkBoxRandomlyPicked"));
        checkBoxRandomlyPicked->setGeometry(QRect(100, 500, 121, 17));
        label_21 = new QLabel(PDB);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(100, 520, 91, 16));
        spinBoxNumberReceptorsToShow = new QSpinBox(PDB);
        spinBoxNumberReceptorsToShow->setObjectName(QString::fromUtf8("spinBoxNumberReceptorsToShow"));
        spinBoxNumberReceptorsToShow->setGeometry(QRect(200, 520, 71, 22));
        label_22 = new QLabel(PDB);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 470, 51, 16));
        line_4 = new QFrame(PDB);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 490, 21, 91));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_23 = new QLabel(PDB);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(100, 540, 91, 16));
        label_24 = new QLabel(PDB);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(100, 560, 71, 16));
        spinBoxSizeReceptors = new QSpinBox(PDB);
        spinBoxSizeReceptors->setObjectName(QString::fromUtf8("spinBoxSizeReceptors"));
        spinBoxSizeReceptors->setGeometry(QRect(200, 540, 71, 22));
        spinBoxMinInteract = new QSpinBox(PDB);
        spinBoxMinInteract->setObjectName(QString::fromUtf8("spinBoxMinInteract"));
        spinBoxMinInteract->setGeometry(QRect(200, 560, 71, 22));
        pushButtonView3DLatfitOutput = new QPushButton(PDB);
        pushButtonView3DLatfitOutput->setObjectName(QString::fromUtf8("pushButtonView3DLatfitOutput"));
        pushButtonView3DLatfitOutput->setGeometry(QRect(510, 380, 111, 23));
        pushButtonIterate = new QPushButton(PDB);
        pushButtonIterate->setObjectName(QString::fromUtf8("pushButtonIterate"));
        pushButtonIterate->setGeometry(QRect(410, 310, 75, 23));
        checkBoxDeInsert = new QCheckBox(PDB);
        checkBoxDeInsert->setObjectName(QString::fromUtf8("checkBoxDeInsert"));
        checkBoxDeInsert->setGeometry(QRect(520, 160, 70, 17));
        spinBoxnKeep = new QSpinBox(PDB);
        spinBoxnKeep->setObjectName(QString::fromUtf8("spinBoxnKeep"));
        spinBoxnKeep->setGeometry(QRect(380, 240, 71, 22));
        label_11 = new QLabel(PDB);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(350, 220, 131, 16));

        retranslateUi(PDB);

        QMetaObject::connectSlotsByName(PDB);
    } // setupUi

    void retranslateUi(QWidget *PDB)
    {
        PDB->setWindowTitle(QApplication::translate("PDB", "Form", nullptr));
        label->setText(QApplication::translate("PDB", "PDB ID", nullptr));
        label_2->setText(QApplication::translate("PDB", "or", nullptr));
        label_3->setText(QApplication::translate("PDB", "Filename", nullptr));
        pushButtonViewPDB3D->setText(QApplication::translate("PDB", "View PDB in 3D", nullptr));
        label_4->setText(QApplication::translate("PDB", "FASTA", nullptr));
        pushButtonDownloadPDB->setText(QApplication::translate("PDB", "->", nullptr));
        label_5->setText(QApplication::translate("PDB", "pdb-tools", nullptr));
        label_6->setText(QApplication::translate("PDB", "Atom: CA, CB or CoM", nullptr));
        label_7->setText(QApplication::translate("PDB", "Chains of interest", nullptr));
        checkBoxAllowJumps->setText(QApplication::translate("PDB", "CheckBox", nullptr));
        label_8->setText(QApplication::translate("PDB", "Allow jumps", nullptr));
        label_9->setText(QApplication::translate("PDB", "Lattice type:", nullptr));
        label_10->setText(QApplication::translate("PDB", "Cubic", nullptr));
        label_12->setText(QApplication::translate("PDB", "Lattice distance:", nullptr));
        label_13->setText(QApplication::translate("PDB", "Average from PDB", nullptr));
        label_14->setText(QApplication::translate("PDB", "Discretize side chains as well", nullptr));
        checkBoxDiscretizeSideChains->setText(QApplication::translate("PDB", "CheckBox", nullptr));
        label_15->setText(QApplication::translate("PDB", "Discretized PDB", nullptr));
        label_16->setText(QApplication::translate("PDB", "Chains read from the PDB", nullptr));
        pushButtonMergeChains->setText(QApplication::translate("PDB", "-> Merge chains into file:", nullptr));
        label_17->setText(QApplication::translate("PDB", "Working directory", nullptr));
        pushButtonDiscretize->setText(QApplication::translate("PDB", "-> Discretize into file:", nullptr));
        pushButtonViewDiscretized->setText(QApplication::translate("PDB", "View PDB+ discretized in 3D", nullptr));
        pushButtonViewReceptorStructures->setText(QApplication::translate("PDB", "View receptor structures", nullptr));
        pushButtonConvertLattice->setText(QApplication::translate("PDB", "-> Convert into lattice into file:", nullptr));
        label_19->setText(QApplication::translate("PDB", "Multi-chain structure", nullptr));
        label_20->setText(QApplication::translate("PDB", "latfit", nullptr));
        checkBoxRandomlyPicked->setText(QApplication::translate("PDB", "randomly picked", nullptr));
        label_21->setText(QApplication::translate("PDB", "number to show:", nullptr));
        label_22->setText(QApplication::translate("PDB", "Ymir", nullptr));
        label_23->setText(QApplication::translate("PDB", "size receptors", nullptr));
        label_24->setText(QApplication::translate("PDB", "min interact", nullptr));
        pushButtonView3DLatfitOutput->setText(QApplication::translate("PDB", "View 3D Latfit Output", nullptr));
        pushButtonIterate->setText(QApplication::translate("PDB", "iterate", nullptr));
        checkBoxDeInsert->setText(QApplication::translate("PDB", "DeInsert", nullptr));
        label_11->setText(QApplication::translate("PDB", "nKeep struct per iteration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PDB: public Ui_PDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PDB_H
