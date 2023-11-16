import json
data={
"name":"jphn",
"age":30,
"city":"new york"
}
json_data=json.dumps(data,indent=4)
print("JSON Data:")
print(json_data)
json_string='{"name":"alice","age":25,"city":"london"}'
parsed_data=json.loads(json_string)
print("parsed data:")
print(parsed_data)
json_string='{"name":"alice","age":25,"city":"london"}'
parsed_data=json.loads(json_string)
print("parsed data:",parsed_data)
