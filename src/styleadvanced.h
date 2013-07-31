#ifndef STYLEADVANCED_H
#define STYLEADVANCED_H

#include <QDialog>

class Style;

namespace Ui {
class StyleAdvanced;
}

class StyleAdvanced : public QDialog
{
    Q_OBJECT
    
public:
    explicit StyleAdvanced(Style* p_style, QWidget *parent = 0);
    ~StyleAdvanced();
signals:
    void styleChanged();
protected slots:
    void apply();
private:
    Ui::StyleAdvanced *ui;
    Style* m_style;
};

#endif // STYLEADVANCED_H
