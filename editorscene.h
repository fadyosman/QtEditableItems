#ifndef EDITORSCENE_H
#define EDITORSCENE_H

#include <QGraphicsScene>
#include <QKeyEvent>
class EditorScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit EditorScene(QObject *parent = 0);
protected:

};

#endif // EDITORSCENE_H
