import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    return [players.shape[0],players.shape[1]]
    #or
    #rows=len(players.axes[0])
    #cols=len(players.axes[1])
    #return [rows,cols]
