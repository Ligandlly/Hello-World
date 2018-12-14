import requests


def translate(en):
    data = {'i': en,'from': 'AUTO','to': 'AUTO','smartresult': 'dict','client': 'fanyideskweb','salt': '15447705290151' , \
        'sign': '15468e1accff733bb4124159666a42cb' , \
        'ts': '1544770529015' , \
        'bv': '43e486d853ef63af6932375b449635ab' , \
        'doctype': 'json' , \
        'version': '2.1' , \
        'keyfrom': 'fanyi.web' , \
        'action': 'FY_BY_CLICKBUTTION', 'typoResult': 'false'}

    response = requests.post("http://fanyi.youdao.com/translate?smartresult=dict&smartresult=rule", data = data)
    return response.json()['translateResult'][0][0]['tgt']


