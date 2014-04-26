#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "FaceView.h"
#include "FaceScene.h"
#include "Visage.h"

int main(int argc, char *argv[])
{
  // Passage des paramètres vers Qt
  QApplication app(argc, argv);

  // Création de la scène
  FaceScene faceScene;

  // Création de la vue
  FaceView faceView(&faceScene);
  faceView.show();

  // Exécution, et plus vite que ça…
  return app.exec();
}
