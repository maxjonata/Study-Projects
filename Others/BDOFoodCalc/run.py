import PySimpleGUI as sg

sg.theme('BluePurple')

layout = [[sg.Text('Calculador de Cerveja'), sg.Text(size=(15,1), key='-OUTPUT-')],
          [sg.Text('Cervejas: '),sg.Input(key='cerveja')],
          [sg.Text('Cereais: '),sg.Input(key='cereais')],
          [sg.Text('Água Mineral: '),sg.Input(key='agua')],
          [sg.Text('Açúcar: '),sg.Input(key='acucar')],
          [sg.Text('Fermento: '),sg.Input(key='fermento')],
          [sg.Button('Show'), sg.Button('Exit'), sg.Button('Zerar')]]

window = sg.Window('Pattern 2B', layout)

while True:  # Event Loop
    event, values = window.read()
    quant = 0
    for item in values.items():
        if(values[item[0]] != '0' and not (not values[item[0]])):
            if item[0] == 'cerveja':
                quant = float(item[1])
            elif item[0] == 'cereais':
                quant = (float(item[1]) / 5)
            elif item[0] == 'agua':
                quant = (float(item[1]) / 6)
            elif item[0] == 'acucar':
                quant = float(item[1])
            elif item[0] == 'fermento':
                quant = (float(item[1]) / 2)
    for item in values.items():
        if(values[item[0]] == '0' or not values[item[0]]):
            if item[0] == 'cerveja':
                values[item[0]] = '' + str(quant)
            elif item[0] == 'cereais':
                values[item[0]] = '' + str(quant * 5)
            elif item[0] == 'agua':
                values[item[0]] = '' + str(quant * 6)
            elif item[0] == 'acucar':
                values[item[0]] = '' + str(quant)
            elif item[0] == 'fermento':
                values[item[0]] = '' + str(quant * 2)
        

    print(event, values)
    if event in  (None, 'Exit'):
        break
    if event == 'Show':
        # Update the "output" text element to be the value of "input" element
        window['cerveja'].update(values['cerveja'])
        window['cereais'].update(values['cereais'])
        window['agua'].update(values['agua'])
        window['acucar'].update(values['acucar'])
        window['fermento'].update(values['fermento'])
    if event == 'Zerar':
        window['cerveja'].update('0')
        window['cereais'].update('0')
        window['agua'].update('0')
        window['acucar'].update('0')
        window['fermento'].update('0')


window.close()