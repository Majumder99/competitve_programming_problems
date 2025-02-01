def process_requests(tokens, requests):
    result = []
    for request in requests:
        req = request[0]
        if req == "get":
            token = request[1].split("?")[1].split("&")[0].split("=")[1]
            if token in tokens:
                result.append("VALID")
            else:
                result.append("INVALID")
        elif req == "post":
            csrf = request[1].split("?")[1].split("&")[1].split("=")[0]
            token = request[1].split("?")[1].split("&")[0].split("=")[1]
            if token in tokens:
                if csrf == "csrf":
                    result.append("VALID")
                else:
                    result.append("INVALID")
            else:
                result.append("INVALID")
    return result



tokens = ["ajjajsjsskskks7", "abcd", "xyz"]
requests = [
        ["get", "https://exampld.com/?token=aaaaa&name=rrrr"],
        ["get", "https://exampld.com/?token=abcd&name=rrrr&location=kuet"],
        ["post", "https://exampld.com/?token=abcd&csrf=asJ124Kii&name=rrrr&location=kuet&id=hiji"],
        ["post", "https://exampld.com/?token=abcd&name=rrrr&location=kuet&id=hiji"]
    ]
    
outputs = process_requests(tokens, requests)
for output in outputs:
    print(output)
        


    