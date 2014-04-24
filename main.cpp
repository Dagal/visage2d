#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "Visage.h"

int main(int argc, char *argv[])
{
  // Passage des paramètres vers Qt
  QApplication app(argc, argv);

  // Création de la scène
  QGraphicsScene scene;
  scene.setBackgroundBrush(Qt::black);
  scene.setSceneRect(-200,-200,400,400);

  // Création de la vue
  QGraphicsView vue(&scene);
  vue.setWindowTitle("Visage 2D");
  vue.setRenderHints(QPainter::Antialiasing |
                     QPainter::SmoothPixmapTransform);
  vue.show();

  // Définition du pinceau
  QPen pen(Qt::blue,
           3,
           Qt::SolidLine,
           Qt::RoundCap,
           Qt::RoundJoin);

  // Création du visage
  Visage visage;
  visage.setPen(&pen);
  QRectF screct = scene.sceneRect();
  visage.setRect(scene.sceneRect());
  visage.setSize(90);
  scene.addItem(&visage);

  // Tentative de connection
  QObject::connect((QObject*)&scene,
                   SIGNAL(sceneRectChanged(QRectF)),
                   (QObject*)&visage,
                   SLOT(setRect(QRectF)));

  // Exécution, et plus vite que ça…
  return app.exec();
}
