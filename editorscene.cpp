#include "editorscene.h"
#include <QGraphicsItem>
#include <QDebug>
EditorScene::EditorScene(QObject *parent) :
    QGraphicsScene(parent)
{
    this->setSceneRect(0,0,1024,1024);
}
