#ifndef WIDGETS_LAYOUT_H
#define WIDGETS_LAYOUT_H

#include <QtWidgets>
#include <QHBoxLayout>
#include <QVBoxLayout>

class CWidgetsList : public QWidget
{
public:
    explicit CWidgetsList(int nId, Qt::Orientation eOrientation, Qt::Alignment eAlignment, QWidget* parent = nullptr);
    ~CWidgetsList();
    void AddWidget(QWidget *pWidget, int nStretch = 0, Qt::Alignment alignment = Qt::Alignment());

protected:
    void CreatUI();
    void AddStretch();

protected:

    int             m_nId;
    Qt::Orientation m_eOrientation;
    Qt::Alignment   m_eAlignment;
    QBoxLayout*     m_pLayout;
};

#endif // WIDGETS_LAYOUT_H
