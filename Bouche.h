#ifndef BOUCHE_H
#define BOUCHE_H

#include <QGraphicsItem>
#include <QPainter>

class Bouche : public QGraphicsItem
{
private:
  QPen* m_pen;

public:
  explicit Bouche(QGraphicsItem *parent = 0);
  QRectF boundingRect() const;
  void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option,
             QWidget *widget);
  void setPen(QPen* pen);

signals:

public slots:

};

#endif // BOUCHE_H
