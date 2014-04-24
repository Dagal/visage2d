#ifndef OEUIL_H
#define OEUIL_H

#include <QGraphicsItem>
#include <QPainter>

class Oeuil : public QGraphicsItem
{
private:
  QPen* m_pen;

public:
  explicit Oeuil(QGraphicsItem *parent = 0);
  QRectF boundingRect() const;
  void paint(QPainter *painter,
             const QStyleOptionGraphicsItem *option,
             QWidget *widget);
  void setPen(QPen* pen);

signals:

public slots:

};

#endif // OEUIL_H
