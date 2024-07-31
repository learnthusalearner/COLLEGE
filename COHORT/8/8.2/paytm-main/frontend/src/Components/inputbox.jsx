export function Inputbox({ name,placeholder}) {
    return <div>
        <div className="text-sm text-left p-2">
            {name}
        </div>
        <input placeholder={placeholder} className="block w-full rounded-md border-0 py-1.5 pl-7 pr-20 ring-1 ring-inset ring-gray-300" />
    </div>
}