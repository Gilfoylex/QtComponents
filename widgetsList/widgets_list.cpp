#include "widgetsList/widgets_list.h"


CWidgetsList::CWidgetsList(int nId, Qt::Orientation eOrientation, Qt::Alignment eAlignment, QWidget *parent)
    : QWidget (parent)
    , m_nId(nId)
    , m_eOrientation(eOrientation)
    , m_eAlignment(eAlignment)
    , m_pLayout(nullptr)
{
    CreatUI();
}

CWidgetsList::~CWidgetsList()
{

}

void CWidgetsList::AddWidget(QWidget *pWidget, int nStretch, Qt::Alignment alignment)
{
    if (m_pLayout != nullptr)
    {
        m_pLayout->addWidget(pWidget, nStretch, alignment);
    }
}

void CWidgetsList::CreatUI()
{
    if (Qt::Horizontal == m_eOrientation)
    {
        m_pLayout = new QHBoxLayout(this);
    }
    else if (Qt::Vertical == m_eOrientation)
    {
        m_pLayout = new QVBoxLayout(this);
    }

    if (m_pLayout)
    {
        m_pLayout->setAlignment(Qt::Alignment());
        m_pLayout->setSpacing(5);
    }

}

void CWidgetsList::AddStretch()
{
    if (m_pLayout)
    {
        m_pLayout->addStretch()
    }
}
