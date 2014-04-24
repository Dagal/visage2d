#ifndef VISAGE_H
#define VISAGE_H

#include <QGraphicsItem>
#include <QPainter>

#include "Oeuil.h"
#include "Nez.h"
#include "Bouche.h"

class Visage : public QGraphicsItem
{
  Q_OBJECT
private:
  qreal m_size;
  QRectF m_rect;
  qreal m_ratio;
  Oeuil* oeuilGauche;
  Oeuil* oeuilDroit;
  Nez* nez;
  Bouche* bouche;
  qreal eyeScale;
  QPen* m_pen;

public:
  explicit Visage(QGraphicsItem *parent = 0);
  QRectF boundingRect() const;
  void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option,
             QWidget *widget);
  void setPen(QPen* pen);
  void setSize(const qreal &size);

signals:

public slots:
  void setRect(const QRectF &rect);

};

#endif // VISAGE_H
