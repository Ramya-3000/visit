#ifndef QVISLINEOUTWINDOW_H
#define QVISLINEOUTWINDOW_H

#include <QvisOperatorWindow.h>
#include <AttributeSubject.h>

class LineoutAttributes;
class QLabel;
class QCheckBox;
class QLineEdit;
class QSpinBox;
class QVBox;
class QButtonGroup;
class QvisColorTableButton;
class QvisOpacitySlider;
class QvisColorButton;
class QvisLineStyleWidget;
class QvisLineWidthWidget;

// ****************************************************************************
// Class: QvisLineoutWindow
//
// Purpose: 
//   Defines QvisLineoutWindow class.
//
// Notes:      This class was automatically generated!

// Programmer: xml2window
// Creation:   Tue Jul 27 09:36:53 PDT 2004
//
// Modifications:
//   
// ****************************************************************************

class QvisLineoutWindow : public QvisOperatorWindow
{
    Q_OBJECT
  public:
    QvisLineoutWindow(const int type,
                         LineoutAttributes *subj,
                         const char *caption = 0,
                         const char *shortName = 0,
                         QvisNotepadArea *notepad = 0);
    virtual ~QvisLineoutWindow();
    virtual void CreateWindowContents();
  protected:
    void UpdateWindow(bool doAll);
    virtual void GetCurrentValues(int which_widget);
  private slots:
    void point1ProcessText();
    void point2ProcessText();
    void samplingOnChanged(bool val);
    void numberOfSamplePointsProcessText();
    void interactiveChanged(bool val);
    void reflineLabelsChanged(bool val);
  private:
    QLineEdit *point1;
    QLineEdit *point2;
    QCheckBox *samplingOn;
    QLineEdit *numberOfSamplePoints;
    QCheckBox *interactive;
    QCheckBox *reflineLabels;
    QLabel *numberOfSamplePointsLabel;
    QLabel *reflineLabelsLabel;

    LineoutAttributes *atts;
};



#endif
