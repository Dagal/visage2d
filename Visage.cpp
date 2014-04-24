#include "Visage.h"

Visage::Visage(QGraphicsItem *parent) :
  QGraphicsItem(parent)
{
  m_size = 100;
  m_rect.setRect(-100,-100,200,200);
  m_ratio = 1;
  eyeScale = 0.2;
  oeuilGauche = new Oeuil(this);
  //oeuilGauche->setScale(eyeScale);
  oeuilGauche->setPos(-50,0);
  oeuilDroit = new Oeuil(this);
  oeuilDroit->setScale(-1);
  oeuilDroit->setPos(50,0);
  nez = new Nez(this);
  nez->setPos(0,30);
  bouche = new Bouche(this);
  bouche->setPos(0,70);

  // Définition du pinceau
  m_pen = new QPen(Qt::red,
                 3,
                 Qt::SolidLine,
                 Qt::RoundCap,
                 Qt::RoundJoin);
}

QRectF Visage::boundingRect() const
{
  return m_rect;
}

void Visage::paint(QPainter *painter,
                   const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
  painter->setPen(*m_pen);
  painter->drawEllipse(m_rect);
}

void Visage::setPen(QPen *pen)
{
  if (pen != NULL)
    {
      delete m_pen;
      m_pen = pen;
    }
}

void Visage::setRect(const QRectF &rect)
{
  m_rect = rect;
}

void Visage::setSize(const qreal &size)
{
  m_size = size;
}
